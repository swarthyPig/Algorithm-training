import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class A {

}

class B extends A {

}

class D { // ��ø Ŭ����
	void func01() {
		System.out.println("�Լ� 1�� call");
	}

	class C {
		void func02() {

		}
	}
}

public class Young {

	public static void main(String[] args) {

		D d1 = new D();
		d1.func01();

		D.C d2 = d1.new C(); // ��ø Ŭ���� ����
		d2.func02();
	}
}
