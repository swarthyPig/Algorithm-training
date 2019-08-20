
/*정수(int)가 주어지면, 팰린드롬(palindrome)인지 알아내시오. 팰린드롬이란, 앞에서부터 읽으나 뒤에서부터 읽으나 같은 단어를 말합니다. 단, 정수를 문자열로 바꾸면 안됩니다.

예제)

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
		
		System.out.println("판단할 수를 입력하시오");
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