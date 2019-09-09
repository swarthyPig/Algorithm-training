import java.util.*;

class Star {

	int count;
	int age;

	public Star(int count, int age) {
		super();
		this.count = count;
		this.age = age;
	}

}

public class Study {

	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);

		LinkedList<Star> li = new LinkedList<>();

		int num = 0;

		while (true) {

			int su = in.nextInt(); // ���� �Է�
			if (su == 999) { // 999���Ǹ� ����

				System.out.println("���α׷��� ����Ǿ����ϴ�");
				break;
			}
			// ����
			for (int i = 0; i < li.size();) {
				int rn = (int) (Math.random() * 2); // 0~1 ������ ���� �߻�
				System.out.println("");
				System.out.print(rn+" ");
				if (rn % 2 == 0) { // ������ ¦���̸�(0�̸�) ����
					li.remove(i);
				} else { // ������ Ȧ���̸�(1�̸�) ����(age)�� 1����
					li.get(i).age++;
					i++;
				}
			}

			Iterator<Star> it = li.iterator();
			while (it.hasNext()) {
				Star n = it.next();
				int rn = (int) (Math.random() * 2); // 0~1 ������ ���� �߻�
				if (rn % 2 == 0) { // ������ ¦���̸�(0�̸�) ����
					it.remove();
				} else { // ������ Ȧ���̸�(1�̸�) ����(age)�� 1����
					n.age++;
				}
			}

			// ����
			for (int i = 0; i < 10; i++) { // 10�� ����
				li.add(new Star(10, 20));
			}

			while (li.size() < 10) {
				li.add(new Star(num++, 0));
				// num++;
			}
			System.out.println("");
			// ���
			for (int i = 0; i < li.size(); i++) {
				System.out.printf("%2d  ", li.get(i).count);
			}
			System.out.println();

			for (int i = 0; i < li.size(); i++) {
				System.out.printf("%2d  ", li.get(i).age);
			}

		}
	}

}
