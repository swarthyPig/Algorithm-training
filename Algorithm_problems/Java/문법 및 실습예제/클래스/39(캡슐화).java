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
	private void func01() {
		System.out.println("������ ���.");
	}

	private void func02() {
		System.out.println("������ �ɰ���.");
	}

	private void func03() {
		System.out.println("������ �Դ´�.");
	}

	void func04() { // ĸ��ȭ(private) �ܺο��� ��� x

		func01();
		func02();
		func03();
	}

	private void ��ħ��() {
		System.out.println("��ħ�� ���ҽ��ϴ�.");
	}

	private void �๰��() {
		System.out.println("�๰�� ������ϴ�.");
	}

	private void �����() {
		System.out.println("������ ���ҽ��ϴ�.");
	}

	void ���հ����() {
		��ħ��();
		�๰��();
		�����();
	}
}

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		t1.func04();
		t1.���հ����();

	}
}
