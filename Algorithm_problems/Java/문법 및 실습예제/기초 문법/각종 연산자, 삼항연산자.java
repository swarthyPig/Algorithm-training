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

		char ch = '�K'; // �ڹٿ��� char�� �����ڵ�
		System.out.println(ch);
		System.out.println((int) ch);

		// �ڹٿ����� short byte�� ��������
		int b = 3;
		// short a = b + 4; //-> ������ ����
		int c = -3;
		int d = +3; // �ڸ�����, �ǵ������� +�� ����

		int n1 = 3;
		System.out.println(n1);
		n1++;
		System.out.println(n1);
		++n1;
		System.out.println(n1);

		int n2 = n1++;
		System.out.println(n1 + " " + n2);// 6 5

		int n3 = ++n1;
		System.out.println(n3 + " " + n2);

		// int n4 = 12345678900; // ��ȿ���ڸ� ������ ���� �߻�

		int n4 = 4;
		int n5 = 3;
		int n6;

		if (n4 > n5) {
			n6 = 10;
		} else {
			n6 = 20;
		}
		System.out.println(n6);
		n6 = (n4 > n5) ? 10 : 20;
		System.out.println(n6);

		System.out.println("---------------------------------------------------------------------------");

		Random rn = new Random(); 

		int num = rn.nextInt(100);
		System.out.println(num);

		for (int i = 0; i < 10; i++) {
			int random = (int)(Math.random()*6)+1;
			System.out.println(random); 
		}

		for (int i = 1; i <= 10; i++) {
			System.out.println("5 * " + i +" = "+ i*5 );
		}
	}
}