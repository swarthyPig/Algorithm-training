import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

interface A{
	void func01();
	
	class B{
		void func02() {
			System.out.println("�Լ� 2�� call");
		}
	}
}

class C implements A{

	@Override
	public void func01() {
		// TODO Auto-generated method stub
		System.out.println("�Լ� 1�� call");
	}
	
}

class D extends A.B{
	
}

public class Young {

	public static void main(String[] args) {

		D d = new D();
		d.func02();
	}
}
