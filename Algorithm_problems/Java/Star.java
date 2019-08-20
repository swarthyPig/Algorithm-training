import java.util.*;

/*
ù��° �� : ������ ���� ���ŵ� �ε����� ������ŭ ������ ���ڰ� ���� count�� 1�� �����Ͽ� LinkedList�� �߰�
�ι�° �� : ��Ƴ��� ������ ���̸� �������� ��Ƴ��� Ƚ���� ǥ��

0   1   2   3   4   5   6   7   8   9  // count 10�ڸ��� �ʱ�ȭ
0   0   0   0   0   0   0   0   0   0  // age�� �ʱ�ȭ

1   2   3   4   5   7   8  10  11  12  // ������ ���� 0,6,9(3��)�� �����Ǿ��� ������ ���ڰ� 9�̹Ƿ� 10, 11, 12�� List�� ���� �߰�
1   1   1   1   1   1   1   0   0   0  // 1,2,3,4,5,7,8 �� ��Ƴ������Ƿ� age�� 1����

1   3   4  11  12  13  14  15  16  17  // ������ ���� 2,5,7,8,10(5��)�� �����Ǿ��� ������ ���ڰ� 12�̹Ƿ� 13,14,15,16,17�� List�� ���� �߰�
2   2   2   1   1   0   0   0   0   0  // �ѹ��� ��Ƴ��� 1,3,4�� ���� ������ �ִ� age 1���� �ѹ��� ��Ƴ������Ƿ� 1�� �� �������� 2����. ��Ƴ��� 11,12�� age�� 1����

1   4  11  12  14  18  19  20  21  22  
3   3   2   2   1   0   0   0   0   0  

1  11  18  19  20  22  23  24  25  26  
4   3   1   1   1   1   0   0   0   0  

11  18  24  27  28  29  30  31  32  33  
4   2   1   0   0   0   0   0   0   0 

11  18  27  33  34  35  36  37  38  39  
5   3   1   1   0   0   0   0   0   0  

18  34  37  38  40  41  42  43  44  45  
4   1   1   1   0   0   0   0   0   0  

18  41  42  43  44  46  47  48  49  50  
5   1   1   1   1   0   0   0   0   0 

... ����ؼ� ����(999�� �ԷµǸ� ���� ����)
*/

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

		int su = 0;
		int n = 2;
		while (true) {
			int num = in.nextInt();
			if (num == 999) { // 999�� �ԷµǸ� ���� ����
				System.out.println("��������");
				break;
			}
			// Update & Delete
			Iterator<Star> it = li.iterator();
			while (it.hasNext()) {
				int rn = (int) (Math.random() * n); // 0~1������ ������ �߻�
				Star st = it.next();
				if (rn % 2 == 0) { // ������ 0�̸� �ش� �ε��� ����
					it.remove();
				} else { // ������ 1�̸� �ش� �ε��� ���� 1 ����
					st.age++;
				}
			}

			// Create
			while (li.size() < 10) { // 0~9���� �Է�
				li.add(new Star(su++, 0));
			}

			// Read
			for (int i = 0; i < li.size(); i++) { // count ���
				System.out.printf("%2d  ", li.get(i).count);
			}
			System.out.println();

			for (int i = 0; i < li.size(); i++) { // age ���
				System.out.printf("%2d  ", li.get(i).age);
			}
		}
	}
}