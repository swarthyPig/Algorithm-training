import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

//�߻� class : �ȿ� �����Լ��� ���� ��  �ִ�
//interface : ó������ �����Լ� ����

/*abstract class Animal{

	abstract void f1();

	abstract void f2();

	abstract void f3();
}*/

interface Animal { // ��ü���� �� �� ����

	void f1();

	void f2();

	void f3();
}

class Tiger implements Animal { // �������̽� �Լ��� public �ʼ�!

	@Override
	public void f1() {
		// TODO Auto-generated method stub
		System.out.println("�Լ� 1�� call");
	}

	@Override
	public void f2() {
		// TODO Auto-generated method stub
		System.out.println("�Լ� 2�� call");

	}

	@Override
	public void f3() {
		// TODO Auto-generated method stub
		System.out.println("�Լ� 3�� call");

	}

}

//is a, has a ����
public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();

		t1.f1();
		t1.f2();
		t1.f3();

		Animal a1 = new Animal() {
			@Override
			public void f1() {
				// TODO Auto-generated method stub
				System.out.println("�Լ� 4�� call");

			}

			@Override
			public void f2() {
				// TODO Auto-generated method stub
				System.out.println("�Լ� 5�� call");

			}

			@Override
			public void f3() {
				// TODO Auto-generated method stub
				System.out.println("�Լ� 6�� call");

			}
		};
		a1.f1();
		a1.f2();
		a1.f3();

		new Animal() {
			@Override
			public void f1() {
				// TODO Auto-generated method stub
				System.out.println("�Լ� 4�� call");

			}

			@Override
			public void f2() {
				// TODO Auto-generated method stub
				System.out.println("�Լ� 5�� call");

			}

			@Override
			public void f3() {
				// TODO Auto-generated method stub
				System.out.println("�Լ� 6�� call");

			}
		}.f1(); // �Ѱ� �ۿ�����
	}
}
