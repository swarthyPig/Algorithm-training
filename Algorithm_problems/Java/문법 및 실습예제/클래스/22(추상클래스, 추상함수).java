import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple { // �߻� Ŭ����
	// �߻�(�̿ϼ�) Ŭ����, �̿ϼ��̶� ��ü ������ �ȵ�, ������ ��� �޾Ƽ� ����ض�!
	// ���α׷��ӿ��� UI�� �����ϱ����ؼ� ����Ѵ�
	
	 Apple() { // ������
		System.out.println("Apple ������ call");
	 }
	 
	 void func01() {
		 System.out.println("�Լ� 1�� call");
	 }
	 
	 // �߻� �Լ�
	 abstract void func02(); 
	 // ������ �Լ��� ����� ��ߵ�
	 abstract void func03();
}

class Orange extends Apple { // �߻�Ŭ������ ��ӹ���
	
	Orange() { 
		System.out.println("Orange ������ call");
	 }

	@Override
	void func02() { // �߻��Լ� override
	System.out.println("�߻� �Լ� 2�� call");
	}

	@Override
	void func03() { // �߻��Լ� override
		System.out.println("�߻� �Լ� 3�� call");
		
	}
}

public class Young {

	public static void main(String[] args) {

		Orange o1 = new Orange();
		o1.func01();
		o1.func02();
		o1.func03();
		
	}
}
