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
class ����� {

	���� fuel; // ���� �ʵ� ����

	// injection : ����, �����ڿ��� �ʿ�� �ϴ� ��ü�� this�� �޾Ƽ� �Լ��� �ʿ��Ҷ� �ٷ� ����ϴ� ��
	�����(���� fuel) {// �����ڿ� ��ü�� �ѹ��� �����ָ� ������ �Լ��� �μ����� �� �ʿ䰡 ��� �ӵ����
		System.out.println("����� ������ call");
		this.fuel = fuel; // ������� ������ �μ��� fuel�� �޾Ƽ� �����Ѵ�
	}

	void ����() {
		fuel.����();
		System.out.println("����Ⱑ ���ư��ϴ�");
	}

	void �ȴ�() {
		fuel.����();
		System.out.println("����Ⱑ �ɾ�ϴ�");
	}

	void �����ϴ�() {
		fuel.����();
		System.out.println("����Ⱑ �����մϴ�");
	}
}

class ���� {

	����() {
		System.out.println("���� ������ call");
	}

	void ����() {
		System.out.println("���Ḧ �����մϴ�");
	}
}

public class Young {

	public static void main(String[] args) {

		���� t1 = new ����();
		����� z1 = new �����(t1);
		// a.func01(new Tiger());

		z1.����();
		z1.�ȴ�();
		z1.�����ϴ�();
	}
}
