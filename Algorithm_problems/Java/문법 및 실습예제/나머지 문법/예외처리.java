import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Tiger {
	Exception func01() throws Exception {
		System.out.println("Tiger 1���Լ� Call");
		return new Exception();
	}
}

public class Young {

	public static void main(String[] args) {

		// ClassCastException ĳ���� ���� ����

		// int a = 3 / 0;
		// ArithmeticException ���а��� ����

		// int[] ar = new int[3];
		// ar[5] = 10;
		// ArrayIndexOutOfBoundsException

		// String s = null;
		// s.toString();
		// NullPointerException ��ü ���� �ϱ����� ��� �Ϸ��� �ؼ� �߻�

		System.out.println("ȣ����");
		
		try {
			int a = 5 / 0;
		} catch (Exception e) {
			e.printStackTrace(); // Exception�� ������ �������
		}
		System.out.println("�ڳ���");

		Tiger t1 = new Tiger();

		try {
			t1.func01(); // ������ �޾ƶ�(try-catch), Unhandled exception
		} catch (Exception e) {

			e.printStackTrace();
		}

		try {
			for (int i = 0; i < 10; i++) {
				System.out.println(i);
				Thread.sleep(1000); // �ð������Լ�
			}

		} catch (Exception e) {

			e.printStackTrace();
		}

	}
}
