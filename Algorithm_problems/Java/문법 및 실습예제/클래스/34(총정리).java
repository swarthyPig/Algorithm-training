import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

/*abstract class ���� {
	abstract void �����ϴ�();
}*/

// ���� ���� ����ü
interface ���� {
	void �����ϴ�();
}

interface ���� {
	void ����();
	void �ȴ�();
}

class ����� implements ���� {
	���� a;

	�����(���� a) {
		this.a = a;
	}

	public void ����() {
		System.out.println("����Ⱑ ���ư��ϴ�.");
		a.�����ϴ�();
	}

	public void �ȴ�() {
		System.out.println("����Ⱑ �ɾ�ϴ�.");
		a.�����ϴ�();
	}
}

class ���� implements ���� {
	���� a;

	����(���� a) {
		this.a = a;
	}

	public void ����() {
		System.out.println("������ ���ư��ϴ�.");
		a.�����ϴ�();
	}

	public void �ȴ�() {
		System.out.println("������ �ɾ�ϴ�.");
		a.�����ϴ�();
	}
}

class ��� implements ���� {
	���� a;

	���(���� a) {
		this.a = a;
	}

	public void ����() {
		System.out.println("����� ���ư��ϴ�.");
		a.�����ϴ�();
	}

	public void �ȴ�() {
		System.out.println("����� �ɾ�ϴ�.");
		a.�����ϴ�();
	}
}

class ��ź implements ���� {
	public void �����ϴ�() { // �������̽��� ���� �Լ��� �տ� public�� �ٿ���ߵȴ�.
		System.out.println("��ź�� �����մϴ�");
	}
}

class ���� implements ���� {
	public void �����ϴ�() {
		System.out.println("������ �����մϴ�");
	}
}

class ���� implements ���� {
	public void �����ϴ�() {
		System.out.println("���� �����մϴ�");
	}
}

public class Young {

	public static void main(String[] args) {

		��ź a = new ��ź();
		���� e = new ����();
		���� w = new ����();
		����� t = new �����(w);
		���� r = new ����(e);

		t.����();
		t.�ȴ�();
		r.����();
		r.�ȴ�();

		��ź a1 = new ��ź();
		���� b = new ����();
		���� c = new ����();

		����[] f = { 
				new �����(a1), 
				new ����(b), 
				new ���(c) 
		};

		for (int i = 0; i < f.length; i++) {
			f[i].����();
		}
	}
}
