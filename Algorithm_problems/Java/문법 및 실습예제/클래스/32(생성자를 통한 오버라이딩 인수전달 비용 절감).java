import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

//�μ������ϴµ� ����� ���̵� (�޸𸮵� ���̵�� �ӵ��� ������), �μ������� �� �� �� ������ ��������
class Zoo {

	Tiger tiger; // tiger �ʵ� ����

	Zoo(Tiger tiger) {// �����ڿ� ��ü�� �ѹ��� �����ָ� ������ �Լ��� �μ����� �� �ʿ䰡 ��� �ӵ����
		System.out.println("Zoo ������ call");
		this.tiger = tiger; // zoo�� ������ �μ��� tiger�� �޾Ƽ� �����Ѵ�
	}

	void func01() {
		tiger.cry();
	}

	void func02() {
		tiger.eat();
	}

	void func03() {
		tiger.walk();
	}
}

class Tiger {

	Tiger() {
		System.out.println("Tiger ������ call");
	}

	void cry() {
		System.out.println("����");
	}

	void eat() {
		System.out.println("ȣ���̰� �Խ��ϴ�.");
	}

	void walk() {
		System.out.println("ȣ���̰� �ɾ�ϴ�.");
	}
}

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		Zoo z1 = new Zoo(t1);
		// a.func01(new Tiger());

		z1.func01();
		z1.func02();
		z1.func03();
	}
}
