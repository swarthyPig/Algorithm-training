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
	// private : ��и� ����, Ŭ������ ������� ��� �� �� ����, ������ ���� ����
	
	private int a, b;
	String s;
	
	private Apple(){
		a = 0;
		System.out.println("������ call");
	}
	
	private void func1() {
		b = 0;
	}
}

public class Young {

	public static void main(String[] args) {


		Apple a1 = new Apple(); // �����ڿ� private ���̸� �߻��ϴ� ����
		a1.a = 20;  // �ʵ� ������ private ���̸� �߻��ϴ� ����
		func1(); // �Լ��� private ���̸� �߻��ϴ� ����
	}
}
