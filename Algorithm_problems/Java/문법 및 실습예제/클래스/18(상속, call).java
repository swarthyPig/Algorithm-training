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
	// C++������ �θ� Ŭ���� �Լ��� �������� �ʴ´�
	// C++������ �θ� Ŭ���� �Լ��� �������� �ʴ´�
	// �����ε� : �޼ҵ��̸��� ������ ������ ������ �ٸ��� ���Ǵ� ��
	// �������̵� : ��Ӱ��迡�� �޼��� �̸��� ���� ��
	Apple() { // ������

		System.out.println("�θ� ������ call");
	}

	void func02() {
		System.out.println("�θ� �Լ� 2�� call");
	}

	void func03() { // ��Ȱ��
		System.out.println("�θ� �Լ� 3�� call");
	}

	void func04() {
		System.out.println("�θ� �Լ� 4�� call");
		func03(); // �θ��Լ��� ��Ȱ��ȭ, �ڽ��Լ� ���
	}

	void func05() {
		System.out.println("�θ� �Լ� 5�� call");
	}

	void func06() {
		System.out.println("�θ� �Լ� 6�� call");
		func05();
	}
}

class Orange extends Apple { // �ڽ�
	
	Orange() { // ������
		super(); // �����Ǿ�����, �θ�����ڸ� call�ϼ��� , �ݵ�� �ڵ� ù�ٿ� ���;ߵ�.
		System.out.println("�ڽ� ������ call");
	}

	void func01() {
		System.out.println("�ڽ� �Լ� 1�� call");
	}

	void func03() {
		System.out.println("�ڽ� �Լ� 3�� call");
	}

	void func05() {
		super.func05(); // �θ��Լ� ȣ���� �� �ִ�
		System.out.println("�ڽ� �Լ� 5�� call");
	}

}

public class Young {

	public static void main(String[] args) {

		Orange o1 = new Orange(); // �θ������ -> �ڽĻ�����, super������
		/*�θ� ������ call
		�ڽ� ������ call*/
		
		o1.func01(); // �ڽ��Լ� 1�� ȣ��
		// �ڽ� �Լ� 1�� call
		
		o1.func02(); // �ڽ� Ŭ������ ���� 2���� ã�ƺ� �� ������ �θ� Ŭ�������� ã�� ����
		// �θ� �Լ� 2�� call
		
		o1.func03(); // �θ�, �ڽ� �Ѵ� 3���� ������, ȣ���ϸ� �ڱ� Ŭ������ 3���� ����Ѵ�
		// �ڽ� �Լ� 3�� call
		
		o1.func04(); // �θ� �Լ��� ��Ȱ��ȭ�Ǿ�, �ڽ��Լ��� ����ϰԵȴ�
		/*�θ� �Լ� 4�� call
		�ڽ� �Լ� 3�� call*/
		
		o1.func05(); // �ڽ��Լ� 5�� -> �θ��Լ� 5�� call -> �ڽ��Լ� 5�� call
		/*�θ� �Լ� 5�� call
		�ڽ� �Լ� 5�� call*/
		
		o1.func06(); // �ڽ��Լ��� 6���� �����Ƿ� �θ��Լ� 6������ �� -> �θ��Լ� 6�� call -> �ڽ� �Լ� 5��  call -> �θ��Լ� 5�� call -> �ڽ��Լ� 5�� call
		/*�θ� �Լ� 6�� call
		�θ� �Լ� 5�� call
		�ڽ� �Լ� 5�� call*/

	}
}
