import java.util.*;

public class Young {
	public static void main(String[] args) {
		
		/*
		 * 문제 : 정수로 된 배열이 주어지면, 각 원소가 자신을 뺀 나머지 원소들의 곱셈이 되게 하시오. 단, 나누기 사용금지. O(n)시간복잡도.
		 * ex) {1, 2, 3, 4, 5} - {120, 60, 40, 30, 24}
		 * 
		 * 배열을 ArrayList를 사용하여 동적으로 배열의 길이를 설정하고 값을 받는 방법으로 알고리즘 구현
		 */

		List<Integer> array = new ArrayList<Integer>();
		List<Integer> results = new ArrayList<Integer>();

		Scanner in = new Scanner(System.in);
		System.out.println("숫자를 입력하세요.");

		while (true) {// 0을 입력하면 while문을 빠져나온다

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

				if (j != except) { // j=0 일때 except=0 이므로 같다 즉 조건문에서 false이므로 계산이 건너뛴다.
					sum *= array.get(j);
				}
			}
			results.add(sum);
			except++;
		}

		System.out.print("입력 값 : ");
		for (int initResult : array) {
			System.out.print(initResult + " ");
		}

		System.out.println("");

		System.out.print("출력 값 : ");
		for (int result : results) {

			System.out.print(result + " ");
		}
	}
}