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

}

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		Tiger t2 = new Tiger();
		Tiger t3;
		t3 = t1; // ����
		System.out.println(t1);
		System.out.println(t2);
		System.out.println(t3);

		if (t1 == t3) {
			System.out.println("ȣ����");
		} else {
			System.out.println("�ڳ���");
		}

		if (t1 == t2) {
			System.out.println("ȣ����");
		} else {
			System.out.println("�ڳ���");
		}

		String s1 = "ȣ����"; // ������ ����ϰ��ִ� �������̸� ���������� ���� �ع���(������ü)
		String s2 = "ȣ����";

		if (s1 == s2) {
			System.out.println("����");
		} else {
			System.out.println("�ٸ���");
		}

		String s3 = new String("ȣ����"); // �����ϱ����� ������ �޸𸮸� ���� �����(�ٸ���ü)
		String s4 = new String("ȣ����");

		if (s3 == s4) {
			System.out.println("����");
		} else {
			System.out.println("�ٸ���");
		}

		if (s3.equals(s4)) { // ���� ��
			System.out.println("����");
		} else {
			System.out.println("�ٸ���");
		}

		String s5 = "ȣ����";
		String s6;

		s6 = s5;
		if (s5 == s6) {
			System.out.println("����");
		} else {
			System.out.println("�ٸ���");
		}
		s6 = "�޹���"; // ���� ��ü�� ������ ���ܹ���, �޹��� ��ü�� ������ �Ȱ�
		System.out.println(s6);

	}
}
