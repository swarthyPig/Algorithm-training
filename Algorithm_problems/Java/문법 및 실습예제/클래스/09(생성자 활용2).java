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
	int a=10,b=20;
	
	Apple(){
		a = 30;
		b = 40;
		System.out.println("������ call");
	}
	
	Apple(){
		int a = 30, b = 40; // �ʵ忡�ִ� a�� �����ھȿ� �ִ� a���� ������ �ٸ�, �������� ������ �����
		System.out.println("������ call");
	}
	
	Apple(){// ������������ ����ã�� �״��� �ʵ�, ������ �ִ� ���� ���
		int a, b; 
		a= 30;
		b = 40;
		System.out.println("������ call");
	}
	
	Apple(){ // this : ���� ����(��ü)�ȿ� ����ִ� 
		int a, b; 
		this.a= 30; // �ʵ忡 ����Ǿ��ִ� ������ ���� ����
		this.b = 40;
		System.out.println("������ call");
	}
	
	Apple(int x, int y){ 
		a = x;
		b = y;
		System.out.println("������ call");
	}
	
	Apple(int a, int b){ 
		//a = a; // �ڱ����, �ƹ��� �ǹ̾���
		//b = b;
		this.a = a;
		this.b = b;
		System.out.println("������ call");
	}
}

public class Young {

	public static void main(String[] args) {
		
		Apple a1 = new Apple(100, 200);
		System.out.println(a1.a + " " + a1.b);
	}
}