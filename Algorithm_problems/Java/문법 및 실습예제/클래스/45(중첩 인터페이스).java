import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

interface A { // ���
	void func01();

	interface B { // ����
		void func02();
	}

	interface C { // ����
		void func03();
	}
}

class D implements A {
	public void func01() {
		System.out.println("�Լ� 1�� call");
	}
}

class E implements A.B { // A�ȿ� ����ִ� B
	public void func02() {
		System.out.println("�Լ� 2�� call");
	}
}

class F implements A.C { // A�ȿ� ����ִ� C
	public void func03() {
		System.out.println("�Լ� 3�� call");
	}
}

public class Young {

	public static void main(String[] args) {

		D d = new D();
		d.func01();

		E e = new E();
		e.func02();

		F f = new F();
		f.func03();
	}
}
