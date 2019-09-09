import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

//������ : �پ��� ������ ����� �������̵� �Ǵ� ��
//���� : �ڵ带 ����ȭ ��ų �� �ִ�.
class Animal {
	void walk() {
		System.out.println("�ɾ�ϴ�");
	}

	void cry() {
		System.out.println("���� �Ҹ��� �� �� �����");
	}
}

class Tiger extends Animal {
	@Override
	void cry() {
		System.out.println("����");
	}
}

class Lion extends Animal {
	@Override
	void cry() {
		System.out.println("ũ�ƾƾ�");
	}
}

class Dog extends Animal {
	@Override
	void cry() {
		System.out.println("�۸�");
	}
}

class Snake extends Animal {

}

public class Young {

	public static void main(String[] args) {

		Animal a1 = new Tiger();
		a1.walk();
		a1.cry();

		Animal a2 = new Lion();
		a2.walk();
		a2.cry();

		Animal a3 = new Dog();
		a3.walk();
		a3.cry();

		Animal a4 = new Snake();
		a4.walk();
		a4.cry();

		Tiger t1 = new Tiger();
		Lion l1 = new Lion();
		Dog d1 = new Dog();
		Snake s1 = new Snake();

		t1.cry();
		l1.cry();
		d1.cry();
		s1.cry();

		System.out.println();
		// �迭�� �̿��� ������(�ڵ� ����ȭ)
		Animal[] a = new Animal[4]; // �迭�� ������� ������ ��ü�� ������� ���� �ƴ�.
		a[0] = new Tiger(); // �θ�=�ڽ� ��ĳ����
		a[1] = new Lion();
		a[2] = new Dog();
		a[3] = new Snake();

		for (int i = 0; i < a.length; i++) {
			a[i].cry();
		}

		Animal[] a5 = { 
				new Tiger(), 
				new Lion(), 
				new Dog(), 
				new Snake() 
		};

		for (int i = 0; i < a.length; i++) {
			a5[i].cry();
		}

	}
}
