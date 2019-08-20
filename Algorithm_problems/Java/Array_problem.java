import java.util.*;

public class Young {
	public static void main(String[] args) {

		/*
		 * 문제 : 정수로 된 배열이 주어지면, 각 원소가 자신을 뺀 나머지 원소들의 곱셈이 되게 하시오. 단, 나누기 사용금지. O(n)시간복잡도.
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

				if (j != except) { // j=0 일때 except=0 이므로 같다 즉 조건문에서 false이므로 계산이 건너뛴다.
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