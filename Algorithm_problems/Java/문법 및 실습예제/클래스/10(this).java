import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Apple { // �켱������ �ʵ��ʱ�ȭ�� ������ �������� ������ ���ŵȴ�
	int a,b;
	//Apple this;
	
	Apple(){
		System.out.println("������ call");
		System.out.println(this); // this�� a1�� �����Ǿ��ִ�.
		//this = a1; //��� ��ü�� this�� ������ �ִ�.
		this.a = 10;;
	}
}

public class Young {

	public static void main(String[] args) {
		
		Apple a1 = new Apple(); // this�� a1�� �����Ǿ��ִ�.
		System.out.println(a1);
		System.out.println(a1.a + " " + a1.b);
		
		Apple a2 = new Apple();
		System.out.println(a2);
		
		a1.a = 10;
	}
}