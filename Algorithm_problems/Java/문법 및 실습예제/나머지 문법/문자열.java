import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

public class Young {

	public static void main(String[] args) {

		String s1 = new String("����ȭ�����Ǿ����ϴٹ���");
		System.out.println(s1);

		System.out.println(s1.toString()); // ������� �ڵ�
		System.out.println(s1.length());
		char c1 = s1.charAt(3);
		System.out.println(c1 + " " + s1.charAt(4));

		String s2 = new String("����ȭ�����Ǿ����ϴ�");

		System.out.println(s1.equals(s2)); // ���ڿ� ��

		String s3 = new String("ABCDEFG");
		byte[] ar = s3.getBytes(); // ��Ʈ��ũ���� ���� ������ byte�� ����
		for (int i = 0; i < ar.length; i++) {

			System.out.println((char) ar[i]);

		}

		int n1 = s1.indexOf("������"); // ù������ index ��ȣ
		System.out.println(n1); // ã�� ���ڿ��� ������ -1��ȯ

		String s4 = s1.replace("����", "�ε鷹");
		System.out.println(s4);

		s1 = s1.replace("����", "�ҳ���"); // ���� s1�޸𸮸� ������Ű�� ���ο� s1�� ����
										// String�� �ȿ� ���� ���� ��ų �� ����. ���ο� ��ü�� ������� ����
										// ����� �߻��Ѵ�.
		System.out.println(s1);

		String s5 = new String("����ȭ�����Ǿ����ϴ�.");
		String s6 = s5.substring(2, 5);
		System.out.println(s6);

		String s7 = s5.substring(3);
		System.out.println(s7);

		String s8 = new String("Apple");
		String s9 = s8.toLowerCase();
		System.out.println(s9);

		String s10 = s8.toUpperCase();
		System.out.println(s10);

		String s11 = new String("  Apple Banana Orange  "); // �ؽ�Ʈ�� �հ� ���� ���� ����
		String s12 = s11.trim();
		System.out.println(s12);

		StringBuffer s13 = new StringBuffer("����ȭ�����Ǿ����ϴ�"); // String �� �ڱⰡ �������ִ� ��������� �Ұ������� StringBuffer�� ��������
		System.out.println(s13);
		s13.append("�ڳ���"); // ���� �߰���
		System.out.println(s13); // ���� �߰���

		s13.insert(4, "ȣ����");// �ش� ��ġ�� �߰��� �߰�
		System.out.println(s13);

		s13.setCharAt(4, '��');// �ش� ��ġ�� ���ڸ� �ٲ���
		System.out.println(s13);

		System.out.println(s13.length());

		s13.delete(2, 4); // 2~4�� �ձ��� ����
		System.out.println(s13);

		String s14 = s13.toString();
		System.out.println(s14);

		String s15 = new String("ȣ����");
		StringBuffer s16 = new StringBuffer();

		s16 = s16.append(s15.toString()); // StringBuffer ���� String�� �ִ� ���
		System.out.println(s16);
	}
}
