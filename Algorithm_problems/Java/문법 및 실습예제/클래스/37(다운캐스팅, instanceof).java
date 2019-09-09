import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Animal {
	
	void func01() {
		System.out.println("Animal �θ��Լ� 1��");
	}

	void func03() {
		System.out.println("Animal �θ��Լ� 3��");
	}

}

class Dog extends Animal {
	
	void func02() {
		System.out.println("Dog �ڽ��Լ� 2��");
	}

	@Override
	void func03() {
		System.out.println("Dog �ڽ��Լ� 3��");
	}
}

class Cat extends Animal {
	void func02() {
		System.out.println("Cat �ڽ��Լ� 2��");
	}

	@Override
	void func03() {
		System.out.println("Cat �ڽ��Լ� 3��");
	}
}

public class Young {

	public static void main(String[] args) {

		Animal d1 = new Dog(); // �θ��Լ��� ��밡��
		d1.func01();
		d1.func03();
		((Dog) d1).func02(); // �Լ� 2���� ��� �ϰ� ������(�ٿ�ĳ����), ��ü ���� �ٿ�ĳ����

		Dog d2;
		d2 = (Dog) d1; // �ڽ� = (�ڽ�)�θ� (����������), new�϶��� �ȵǴµ� �޸𸮸� ���� �Ŀ��� ����
		d2.func01();
		d2.func02();
		d2.func03();

		Cat c1;
		// c1 = (Cat)d1; // ������ ������, ����� = (�����)��, java.lang.ClassCastException �߻�

		// ���⿡�� d1�� ���� ��ü ������ �𸥴ٸ�
		if (d1 instanceof Dog) { // d1�� Dog Ÿ���Դϱ�?
			Dog dog = (Dog) d1;
			dog.func01();
			dog.func02();
			dog.func03();
			// System.out.println("�´�");
		} else {
			System.out.println("�ƴϴ�");
		}

		Animal a2 = new Cat();
		if (a2 instanceof Cat) { // a2�� Cat Ÿ���Դϱ�?
			Cat cat = (Cat) a2;
			cat.func01();
			cat.func02();
			cat.func03();
		}

	}
}
