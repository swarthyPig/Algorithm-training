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

		LinkedList<Integer> li = new LinkedList<>(); // ���׸� �ȿ��� class�� �� �� �ִ�.

		System.out.println(li.size()); // ���� LinkedList�� ũ�⸦ �� �� ����.
		li.add(100); // ���� ����
		System.out.println(li.size());

		for (int i = 0; i < 10; i++) { // for������ ���� �� ����
			li.add(i * 10 + i);
		}
		System.out.println(li.size());
		
//------------------------------------------------------------------------------------------
		
		// �д� ���1��°
		System.out.println(li); // �����ֱ⸸ �� ��

		// �д� ��� 2��°
		for (int i = 0, size = li.size(); i < size; i++) {
			System.out.print(li.get(i) + " "); 
		}System.out.println();

		int a = li.get(2); // ������ ���� �� �� �ִ�
		System.out.println(a);

		// �д� ��� 3��°, foreach��
		for (Integer i : li) {
			System.out.print(i + " ");
		}System.out.println();

		// �߰�
		li.add(4, 777); // index 4 �ڸ��� 777 ����
		System.out.println(li);

		// ����
		li.set(4, 999);
		System.out.println(li);

		// ����
		li.remove(4);
		System.out.println(li);

		li.add(4, 777);
		System.out.println(li);

		// �˻�
		for (int i = 0; i < li.size(); i++) {
			if (li.get(i) == 777) { // �˻�
				li.remove(i); // 777����
				break;
			}
		}
		System.out.println(li);

		li.add(0, 10);
		li.add(0, 20);
		li.add(0, 30);
		li.add(0, 40);
		System.out.println(li);
		
		for (int i = 0; i < li.size(); i++) { // ������ �ε��� �״��� �ε����� ������ ����� ���̷������.(�������� ¦�� �϶�),(size�� ���� ��� ���ϱ� ����)
			if (li.get(i) % 2 == 0) {
				li.remove(i);
			}
		}
		System.out.println(li);
		
		for (int i = 0; i < li.size();) { // �����۵�
			if (li.get(i) % 2 == 0) {
				li.remove(i);
			} else {
				i++;
			}
		}
		System.out.println(li);
		
		for (int i = 0, size = li.size(); i < size;) { // �����۵�x size�� ���� �����Ǳ⶧��
			if (li.get(i) % 2 == 0) {
				li.remove(i);
			} else {
				i++;
			}
		}
		System.out.println(li);
	}
}
