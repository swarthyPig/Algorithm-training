import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Apple { // �θ�
	
	Apple() { // ������
		System.out.println("�θ� ������ call");
	}
	
	Apple(int a) {
		System.out.println("�θ� ������ call");
		System.out.println(a);
	}
	Apple(int a, int b) {
		System.out.println("�θ� ������ call");
		System.out.println(a+" "+b);
	}
}

class Orange extends Apple { // �ڽ�
	
	Orange() {
		//super();
		//super(10);
		super(10, 20);
		System.out.println("�ڽ� ������ call");
	}
	Orange(int a, int b, int c){
		super(10);
		System.out.println(a+" "+b+" "+c);
	}
}

public class Young {

	public static void main(String[] args) {

		Orange o1 = new Orange(10, 20, 30); 
	}
}