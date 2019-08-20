import java.util.*;

public class Young {
	public static void main(String[] args) {
		
		/*
		 * ���� : ������ �� �迭�� �־�����, �� ���Ұ� �ڽ��� �� ������ ���ҵ��� ������ �ǰ� �Ͻÿ�. ��, ������ ������. O(n)�ð����⵵.
		 * ex) {1, 2, 3, 4, 5} - {120, 60, 40, 30, 24}
		 * 
		 * �迭�� ArrayList�� ����Ͽ� �������� �迭�� ���̸� �����ϰ� ���� �޴� ������� �˰��� ����
		 */

		List<Integer> array = new ArrayList<Integer>();
		List<Integer> results = new ArrayList<Integer>();

		Scanner in = new Scanner(System.in);
		System.out.println("���ڸ� �Է��ϼ���.");

		while (true) {// 0�� �Է��ϸ� while���� �������´�

			int su = in.nextInt();

			if (su == 0) {
				break;
			}
			array.add(su);
		}

		int sum = 1;
		int except = 0;

		int array_size = array.size();
		for (int i = 0; i < array_size; i++) {

			sum = 1;

			for (int j = 0; j < array_size; j++) {

				if (j != except) { // j=0 �϶� except=0 �̹Ƿ� ���� �� ���ǹ����� false�̹Ƿ� ����� �ǳʶڴ�.
					sum *= array.get(j);
				}
			}
			results.add(sum);
			except++;
		}

		System.out.print("�Է� �� : ");
		for (int initResult : array) {
			System.out.print(initResult + " ");
		}

		System.out.println("");

		System.out.print("��� �� : ");
		for (int result : results) {

			System.out.print(result + " ");
		}
	}
}