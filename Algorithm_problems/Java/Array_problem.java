import java.util.*;

public class Young {
	public static void main(String[] args) {

		/*
		 * ���� : ������ �� �迭�� �־�����, �� ���Ұ� �ڽ��� �� ������ ���ҵ��� ������ �ǰ� �Ͻÿ�. ��, ������ ������. O(n)�ð����⵵.
		 * ex) {1, 2, 3, 4, 5} - {120, 60, 40, 30, 24}
		 */

		int[] array = { 1, 2, 3, 4, 5 };
		int[] results = new int[5];

		int sum = 1;
		int except = 0;

		int array_length = array.length;
		for (int i = 0; i < array_length; i++) {

			sum = 1;

			for (int j = 0; j < array_length; j++) {

				if (j != except) { // j=0 �϶� except=0 �̹Ƿ� ���� �� ���ǹ����� false�̹Ƿ� ����� �ǳʶڴ�.
					sum *= array[j];
				}
			}
			results[i] = sum;
			except++;
		}

		for (int initResult : array) {
			System.out.print(initResult + " ");
		}

		System.out.println("");

		for (int result : results) {
			System.out.print(result + " ");
		}
	}
}