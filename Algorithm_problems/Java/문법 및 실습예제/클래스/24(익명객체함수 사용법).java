import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple {
	abstract void func01();
}

class Tiger {
	void func02(Apple apple) {
		apple.func01();
	}
}

public class Young {

	public static void main(String[] args) {

		// �͸�ü ���� : �Լ��� �μ��� �ڵ带 ������ �� �ִ�.
		Tiger t1 = new Tiger();
		t1.func02(new Apple() {
			@Override
			void func01() {
				System.out.println("����� ����");
			}
		});

		t1.func02(new Apple() {
			@Override
			void func01() {
				// TODO Auto-generated method stub
				System.out.println("����� ����");
			}
		});
	}
}
