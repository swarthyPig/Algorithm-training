import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Apple {
	// int a=10, b=20;
	int a, b;

	Apple() { // ������ 0���� �ʱ�ȭ �Ǵϱ� ����δ°� ���
		a = 0;
		b = 0;
		System.out.println("������ call");
	}

	Apple(int x, int y) {
		a = x;
		b = y;
	}
}

public class Young {

	public static void main(String[] args) {
		Apple a1 = new Apple();
		System.out.println(a1.a + " " + a1.b);

		Apple a2 = new Apple(100, 200);
		System.out.println(a2.a + " " + a2.b);

		Apple a3 = new Apple(30, 40);
		System.out.println(a3.a + " " + a3.b);
	}
}