import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��

class Tiger {
	int a,b;
}

public class Young {
	
	public static void main(String[] args) {

		Tiger t1 = new Tiger(); // ����� 1
		Tiger t2 = new Tiger(); // ����� 2

		t1.a = 10;
		t1.b = 20;

		System.out.println(t1.a+" "+t1.b);
		System.out.println(t2.a+" "+t2.b);	

		Tiger t3; // ������
		// ���Կ����ڴ� �Ϲ� Ÿ���� ������ �Ͼ���� ��ü�� ������ �Ͼ��
		t3 = t1; // ������ �Ͼ�� ���� �ƴϰ� ������ �Ͼ��, ������ �Ͼ��
		// t1(t3),t2 ���������ϴ� ��ü�� 2��

		t1 = t2; // �����ִ� �޸𸮰� t1(t2), t3 �̴�.

		t3 = t1; // �� �ڵ� ���Ŀ��� ��ü�� 1���� ����

		System.out.println(t3.a+" "+t3.b);

		System.out.println(t1); // t1�� �޸� �ּ� : @299a06ac
		System.out.println(t2);	// t2�� �޸� �ּ� : @383534aa �����ް� ���ڴ�@299a06ac
		System.out.println(t3); // t3�� �޸� �ּ� : @299a06ac
	}
}