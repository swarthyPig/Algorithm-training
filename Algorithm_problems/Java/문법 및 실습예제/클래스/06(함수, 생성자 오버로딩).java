import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��

class Tiger {
	
	// �Լ��� �̸��� �����鼭 �μ��� ������ �ٸ� ���� �Լ� �����ε� �̶�� �Ѵ�.
	// �Լ� �����ε��̶� �Լ� �̸��� ���� �ϰ� �۸� �� �� ������ ���� �Ǵ� �μ��� ������ ���� �ٸ� ���� ���� �� �̸����� �۸� �� �� �ִ�.
	// �μ��� ������ ���Ƶ� �޴� Ÿ���� �ٸ��� �����ϴ�.
	Tiger(){
		System.out.println("���� Default ������");
	}
	Tiger(int a){
		System.out.println(a);
	}
	Tiger(int a, int b){
		System.out.println(a + " " + b);
	}
	Tiger(int a, int b, int c){
		System.out.println(a + " " + b + " " + c);
	}
	Tiger(float b){ // �μ��� ������ ���Ƶ� �޴� Ÿ���� �ٸ��� �����ϴ�
		
	}
	Tiger(String s){
		
	}
}

public class Young {
	
	public static void main(String[] args) {
		
		Tiger t1 = new Tiger(100);
		Tiger t2 = new Tiger(200);
		Tiger t3 = new Tiger();
		Tiger t4 = new Tiger(30,40);
		Tiger t5 = new Tiger(30,40,50);
	}
}
