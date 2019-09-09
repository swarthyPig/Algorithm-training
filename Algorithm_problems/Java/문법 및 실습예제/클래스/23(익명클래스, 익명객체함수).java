import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple { // �Ѱ� �̻��� �߻� �Լ��� �������� �ݵ�� �� �Լ��� �߻�Ŭ���� �̾�� �Ѵ�
	
	abstract void func01();
}

class Orange extends Apple {

	@Override
	void func01() {
		System.out.println("�Լ� 1�� call");
	}

}

public class Young {

	public static void main(String[] args) {

		// ex 1)
		Orange o1 = new Orange();

		o1.func01();

		// ex 2)
		Apple a1 = new Apple() { // �͸�Ŭ����, ������ ��� ���̵�, �߿��ϴ�
			void func01() {
				System.out.println("���� 2");
			}
		};
		a1.func01();

		// ex3
		Apple a2 = new Apple() { // �����ϰ� ����� ���
			@Override // ������̼�
			void func01() {
				System.out.println("���� 3");
			}
		};
		a2.func01();

		// ex4
		new Apple() { // �͸� ��ü ��� �Լ�
			@Override
			void func01() {
				System.out.println("���� 4");
			}
		}.func01(); // �ٷν���

		// ex5
		new Apple() { // �Լ� call ���ϸ� �ǹ̾��� �������.
			@Override
			void func01() {
				System.out.println("���� 5");
			}
		};
		

	}
}
