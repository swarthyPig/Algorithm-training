import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple { // �߻�Ŭ����

	abstract void func01(); // �߻��Լ� ����

	abstract void func02(); // �߻��Լ� ����

	void func03() {

	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple() { // ��ü �����Ҷ� �Լ� �������̵� 

			@Override
			void func01() {
				System.out.println("1��");
			}

			@Override
			void func02() {
				System.out.println("2��");
			}

			@Override
			void func03() {
				System.out.println("3��");
			}
		};
		a1.func01();
		a1.func02();
		a1.func03();
	}
}
