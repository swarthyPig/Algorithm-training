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

class Zoo {
	
	void cry(Tiger tiger) {
		tiger.cry();
	}

	void cry(Lion lion) { // �Լ� �����ε��� ��
		lion.cry();
	}

	void cry(Dog dog) { // �Լ� �����ε��� ��
		dog.cry();
	}

	void cry(Snake snake) { // �Լ� �����ε��� ��
		snake.cry();
	}

	void cry(Animal animal) {
		System.out.println("����� ������ �Դϴ�.");
		animal.cry();
	}
}

public class Young {

	public static void main(String[] args) {

		Zoo z1 = new Zoo();
		z1.cry(new Tiger());
		z1.cry(new Lion());
		z1.cry(new Dog());
		z1.cry(new Snake());

		Animal[] a = { 
				new Tiger(), 
				new Lion(), 
				new Dog(), 
				new Snake() 
		};
		
		for (int i = 0; i < a.length; i++) {
			z1.cry(a[i]);
		}

	}
}
