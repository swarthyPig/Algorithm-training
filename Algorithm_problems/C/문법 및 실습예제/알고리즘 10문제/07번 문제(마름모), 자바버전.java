import java.util.*;

public class Study {

	static void rhombus(int n) {

		int num = n / 2;  //�� ���α׷��� Ư���� Ȧ���� �Է��Ѵ�.
		for (int i = -num; i <= num; i++) {
			for (int j = -num; j <= num; j++) {
				int a = i;
				int b = j;
				if (a < 0) { // a�� i�� �����̸� ����� �ٲ�
					a = -a;
				}
				if (b < 0) { // b�� j�� �����̸� ����� �ٲ�
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
