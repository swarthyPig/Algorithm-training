import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

interface A {
	void func01();
}

interface B extends A {
	void func02();
}

class C implements B {

	@Override
	public void func01() {
		// TODO Auto-generated method stub

	}

	@Override
	public void func02() {
		// TODO Auto-generated method stub

	}

}

public class Young {

	public static void main(String[] args) {

		C c = new C();
		c.func01();
		c.func02();
		// Integer
	}
}
