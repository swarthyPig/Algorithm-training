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

}

class Dog extends Animal {
	
	void func01() {
		System.out.println("Dog 1�� call");
	}
}

class Cat extends Animal {
	
	void func01() {
		System.out.println("Cat 1�� call");
	}
}

class Zoo { // zoo�� ����̵� �������� �����µ� �ڱ� Ŭ������ �Լ� 1���� ����ʹ�, �ٵ� �������� ���� ����̰� ���� �𸥴�
	
	void func02(Animal animal) {
		if (animal instanceof Dog) {
			Dog dog = (Dog) animal; // �ٿ�ĳ����
			dog.func01();
		}

		if (animal instanceof Cat) {
			Cat cat = (Cat) animal; // �ٿ�ĳ����
			cat.func01();
		}
	}
}

public class Young {

	public static void main(String[] args) {

		Animal a1 = new Dog();
		Animal a2 = new Cat();

		Zoo zoo = new Zoo();

		zoo.func02(a1); // ��ü�� �μ��� ������
		zoo.func02(a2);
		// zoo�� ����̵� �������� �����µ� �ڱ� Ŭ������ �Լ� 1���� ����ʹ�, �ٵ� �������� ���� ����̰� ���� �𸥴�

	}
}
