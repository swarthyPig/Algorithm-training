import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

public class Young {

	public static void main(String[] args) {

		LinkedList<String> li = new LinkedList<>();

		li.add("ȣ����");

		for (int i = 0; i < 6; i++) {
			li.add("�ڳ���" + i);
		}
		li.add(3, "�޹���");

		System.out.println("[��� 1��° ���]");
		System.out.println(li); // 1��° ���

		System.out.println("[��� 2��° ���]");
		for (int i = 0; i < li.size(); i++) {// 2��° ���
			System.out.print(li.get(i) + " ");
		}System.out.println();

		System.out.println("[��� 3��° ���]");
		for (String i : li) {// 3��° ���
			System.out.print(i + " ");
		}System.out.println();

		System.out.println("[��� 4��° ���]");
		Iterator<String> it = li.iterator();
		while (it.hasNext()) {// 4��° ���
			String str = it.next();
			System.out.print(str + " ");
		}System.out.println();

		System.out.println("[������Ʈ]");
		li.set(4, "����");
		li.set(5, "����");
		li.set(6, "����");
		System.out.println(li);

		System.out.println("[���� 1��° ���]");
		li.remove(4);
		System.out.println(li);
		System.out.println("[���� 2��° ���]");
		for (int i = 0; i < li.size();) {
			if (li.get(i) == "�޹���") {
				li.remove(i);
			} else {
				i++;
			}
		}
		System.out.println(li);
		
		System.out.println("[���� 3��° ���]");
		it = li.iterator();
		while (it.hasNext()) {
			String n = it.next();
			if (n.equals("����")) {
				it.remove();
			}
		}
		System.out.println(li);
	}
}
