import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Tiger{
	
	Tiger(){
		System.out.println("default");
	}
	
	Tiger(int a){
		this();
		System.out.println(a);
	}
	
	Tiger(int a, int b){
		this(a); // �ڱ� ������ call
		System.out.println(a);
		System.out.println(a + " " + b);
	}
	
	void func01(int ... a) {// �μ������� �����μ��϶�
		System.out.println("ȣ����");
		for (int i = 0; i < a.length; i++) {
			System.out.println(a[i]); 
		}
	}
	// ���� ���� �ؿ����� �Ȱ��� �ڵ���
	void func02(int[] a) {// �μ������� �����μ��϶�
		System.out.println("ȣ����");
		for (int i = 0; i < a.length; i++) {
			System.out.println(a[i]); 
		}
	}
}

public class Young {

	public static void main(String[] args) {
		
		Tiger t1 = new Tiger(10, 20);
		t1.func01(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 );
		int[] ar = {
				1, 2, 3, 4, 5, 
				6, 7, 8, 9, 10, 
				11, 12, 13,14, 15
		};
		t1.func02(ar);
	}
}
