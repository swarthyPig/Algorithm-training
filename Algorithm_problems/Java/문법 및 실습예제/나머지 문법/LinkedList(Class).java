import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Tiger {
	int n;
	String s;

	public Tiger(int n, String s) {
		super();
		this.n = n;
		this.s = s;
	}

	void show() {
		System.out.print(n + "" + s + " ");
	}
}

public class Young {

	public static void main(String[] args) {

		LinkedList<Tiger> li = new LinkedList<>();

		// �Է� 1��° ���
		Tiger t1 = new Tiger(10, "ȣ����");
		li.add(t1);

		// �Է� 2��°���
		li.add(new Tiger(20, "�ڳ���"));

		System.out.println(li); // ���� ��ȣ�� ����

		for (int i = 0; i < 5; i++) {
			li.add(new Tiger(i * 100 + 100, "�޹���" + i));
		}

		// ��� 1
		for (int i = 0; i < li.size(); i++) {
			Tiger tt = li.get(i);
			tt.show();
			//li.get(i).show(); //���� ���� ���
		}
		System.out.println();
		// ��� 2
		for (Tiger i : li) {
			i.show();
		}
		System.out.println();

		// ��� 3
		Iterator<Tiger> it = li.iterator();
		while (it.hasNext()) {
			Tiger tt = it.next();
			tt.show();
			//it.next().show();
		}
		System.out.println();
	}
}
