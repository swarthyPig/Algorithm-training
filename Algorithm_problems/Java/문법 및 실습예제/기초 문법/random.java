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

		Random rn = new Random(); // Ŭ������ �̿��Ͽ� ��ü�� �����Ѵ�.

		//1.
		rn.nextInt();
		int num = rn.nextInt();
		System.out.println(num);

		//2.
		System.out.println(rn.nextInt());

		//3.
		System.out.println(rn.nextInt(100)); //0~100������ ���� ����

		for (int i = 0; i < 10; i++) {
			System.out.println(rn.nextInt(100));
		}

		int rn2 = (new Random()).nextInt(100);
		System.out.println(rn);
		System.out.println((new Random()).nextInt(100));
	}
}