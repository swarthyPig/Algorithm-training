import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
public class Young {

	public static void main(String[] args) {

		System.out.printf("%d\n", 3);
		System.out.println(10+20); //���� + ����
		System.out.println(10+"20"); // ���� + ���ڿ� = ���ڿ�
		System.out.println("20"+10); // ���ڿ� + ���� = ���ڿ�
		System.out.println(10+20+"20"); // ����+����+���ڿ�
		System.out.println("20"+10+20); // ���ڿ� + ���� + ����
		System.out.println("20"+(10+20)); // ���ڿ� + (���� + ����) : ������ �켱����
		System.out.println(10+" "+20); // ���� + ���� + ����
	}
}