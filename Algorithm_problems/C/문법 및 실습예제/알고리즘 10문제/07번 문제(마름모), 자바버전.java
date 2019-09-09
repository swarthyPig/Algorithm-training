import java.util.*;

public class Study {

	static void rhombus(int n) {

		int num = n / 2;  //단 프로그램의 특성상 홀수를 입력한다.
		for (int i = -num; i <= num; i++) {
			for (int j = -num; j <= num; j++) {
				int a = i;
				int b = j;
				if (a < 0) { // a즉 i가 음수이면 양수로 바꿈
					a = -a;
				}
				if (b < 0) { // b즉 j가 음수이면 양수로 바꿈
					b = -b;
				}

				System.out.print(a + b <= num ? '*' : ' ');
				// printf("[%+2d %+2d] ", a, b);
			}
			System.out.println();
		}
	}

	public static void main(String[] args) {

		int cnt = (new Scanner(System.in)).nextInt();

		rhombus(cnt);
	}

}
