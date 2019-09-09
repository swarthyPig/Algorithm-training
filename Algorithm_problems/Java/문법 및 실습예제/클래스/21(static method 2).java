import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Apple {

	Apple() { // ������
		System.out.println("�θ� ������ call");
	}

	static void func01() {// static �Լ������� static�Լ��� call �� �� �ִ�.
		
		// func03();// static �Լ������� static�Լ��� call �� �� �ִ�.
		System.out.println("static 1�� �Լ� call");
	}

	void func02() {
		func01();
		System.out.println("2�� �Լ� call");
	}

	void func03() {
		System.out.println("3�� �Լ� call");
	}
}

public class Young {

	static void func04() {
		System.out.println("static 4�� �Լ� call");
	}

	void func06() {
		System.out.println("6�� �Լ� call");
	}

	public static void main(String[] args) {

		Apple a1 = new Apple();

		func04(); // static�ȿ����� ������ static�� call�� �� �ִ�.
		func05();

		Young y = new Young();
		y.func06(); // static�� �Ⱥپ������� Ŭ���� �̸����� ��ü �����ؼ� �Լ� call�ϸ� ��
	}

	static void func05() {
		System.out.println("static 5�� �Լ� call");
	}
}
