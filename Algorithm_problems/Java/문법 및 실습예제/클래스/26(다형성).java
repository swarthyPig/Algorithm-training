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
	
	void eat() {
		System.out.println("�Խ��ϴ�");
	}
}

class Tiger extends Animal {
	
	void hunter() {
		System.out.println("����մϴ�");
	}
}

class Lion extends Animal {
	
	void hunter() {
		System.out.println("����մϴ�");
	}

	void sleep() {
		System.out.println("������ ��ϴ�");
	}
}

class Rabbit extends Animal {
	
	void walk() {
		System.out.println("�䳢�� �پ�ٴմϴ�.");
	}
}

class Dwarf extends Rabbit {
	
	void smile() {
		System.out.println("�����ϴ�");
	}
}

//is a, has a ����
public class Young {

	public static void main(String[] args) {

		Animal a1 = new Animal();
		a1.eat();

		Tiger t1 = new Tiger();
		t1.eat();
		t1.hunter();

		Lion l1 = new Lion();
		l1.eat();
		l1.hunter();
		l1.sleep();

		Rabbit r1 = new Rabbit();
		r1.eat();
		r1.walk();

		Dwarf d1 = new Dwarf();
		d1.eat();
		d1.smile();
		d1.walk();
	}
}
