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
	
	int a,b; // �ʵ带 �����ϴ�
	int c = 100; // �ʵ带 ����� ���ÿ� �ʱ�ȭ�Ѵ�
	
	String s1; // ��ü�� ����
	String s2 = new String(); // ��ü�� ����� ���ÿ� �����Ѵ�
	
	//a = 30; // ����, �ʱ�ȭ, ���� ����� �ƹ��͵� ���� �Ұ�
	//c++;
	//this.a  = 10;
	
	Apple(){
		System.out.println("������ call");
		System.out.println(this); // this�� a1�� �����Ǿ��ִ�.
		//this = a1; //��� ��ü�� this�� ������ �ִ�.
	}
}

public class Young {

	public static void main(String[] args) {
		
		Apple a1 = new Apple();

		System.out.println(a1.a + " " + a1.b);
		
	}
}