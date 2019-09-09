import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class A { // ���� ���� ��� �ϴ� ���(99%��)
	interface B {
		void func01();
	}
}

class C implements A.B {

	@Override
	public void func01() {
		System.out.println("1�� call");
	}
}

public class Young {

	public static void main(String[] args) {

		C c = new C();
		c.func01();

		A.B ab = new A.B() {
			@Override
			public void func01() {
				System.out.println("�Լ� 1�� �͸�Ŭ����");

			}
		};
		ab.func01();
	}
}
