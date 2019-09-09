import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Animal {

	Animal() { // ������
		System.out.println("Animal ������ call");
	}

	void func01() {
		System.out.println("�θ� �Լ� 1�� call");
	}

	void func03() { // �θ� �Լ��� ��������(�������̵�)
		System.out.println("�θ� �Լ� 3�� call");
	}
}

class Tiger extends Animal { // Animal Ŭ���� ���
	
	Tiger() { // ������
		System.out.println("Tiger ������ call");
	}

	void func02() {
		System.out.println("�ڽ� �Լ� 2�� call");
	}

	void func03() {
		System.out.println("�ڽ� �Լ� 3�� call");
	}
}

//��ĳ���� : � �����ε� �����ϴ�(99%) ��:�� ���� -> A:B
//�ٿ�ĳ���� : �ڽ��� ���󰣴�(�ý��� �ٿ�ɼ��� �ִ�)(1%) ��:�� ���� -> B:A
//���Կ������� ������ ����(������ �� �ִ� �κ�) �������� �޸�(����� �� �ִ� �κ�)
public class Young {

	public static void main(String[] args) {

		Animal a2 = new Tiger(); // �θ� ���� �ۿ� ��� ����, �θ�=�ڽ�
		// Tiger t2 = (Tiger)new Animal(); // �ٿ�ĳ������ new�� �Ҽ�����. �����δ� �����ȳ����� ���������δ� �״´�

		a2.func01();
		// a2.func02(); �θ� ���� �ۿ� ��� ���ؼ� ������(������� ���� �� �޸𸮴� ������)
		a2.func03();

	}
}
