
/*����(int)�� �־�����, �Ӹ����(palindrome)���� �˾Ƴ��ÿ�. �Ӹ�����̶�, �տ������� ������ �ڿ������� ������ ���� �ܾ ���մϴ�. ��, ������ ���ڿ��� �ٲٸ� �ȵ˴ϴ�.

����)

Input: 12345
Output: False

Input: 11111
Output: True

Input: 12421
Output: True

*/

import java.util.*;

public class exam {
	
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		System.out.println("�Ǵ��� ���� �Է��Ͻÿ�");
		int num = in.nextInt();
		
		int position = 0;
		int numCnt = num;
		while(numCnt > 0) {
			numCnt=numCnt/10;
			position++;
		}
		
		int[] ar = new int[position];
		
		int length = ar.length;
		for (int i = 0; i < length; i++) {
			
			int su = num%10;
			num = num/10;
			
			ar[length-1-i] = su;
		}
		
		int cnt = 0;
		for (int i = 0; i < length/2; i++) {
			if(ar[i]==ar[length-i-1]) {
				cnt++;
			}
		}
		
		if(cnt == length/2) {
			System.out.println("true");
		}else {
			System.out.println("false");
		}
	}

}