import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��

class Tiger {
	//ǥ��Ÿ��
	byte a = 10;
	short b = 20;
	char c = 'A';
	int d = 30;
	long e = 40;
	float f = 50.0f;
	double g = 60.0;
	boolean h = true;
	
	String s1 = "ȣ����";
	String s2 = new String();
	String s3 = new String("�ڳ���");
	String s4;
}

public class Young {
	
	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		
		System.out.println(t1.a);
		System.out.println(t1.b);
		System.out.println(t1.c);
		System.out.println(t1.d);
		System.out.println(t1.e);
		System.out.println(t1.f);
		System.out.println(t1.g);
		System.out.println(t1.h);
		System.out.println(t1.s1);
		System.out.println(t1.s2);
		System.out.println(t1.s3);
		System.out.println(t1.s4); // ��� ���ϴ� ���� ���� NULL
	}
}