import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Apple { //�θ�
	Apple(){
		super();
		System.out.println("�θ� ������ call");
	}
}

class Orange extends Apple { // �ڽ�
	Orange(){
		super(); // �����Ǿ�����, �θ�����ڸ� call�ϼ��� , �ݵ�� �ڵ� ù�ٿ� ���;ߵ�.
		System.out.println("�ڽ� ������ call");

	}
}

public class Young {

	public static void main(String[] args) {

		//Apple a1 = new Apple(); // ����ϰ� �ƹ� �������.
		Orange o1 = new Orange(); // ���� : �ڽĻ����� call -> �θ� ������ 
	}
}
