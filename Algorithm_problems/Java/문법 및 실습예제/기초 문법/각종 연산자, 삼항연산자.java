import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
public class Young {

	public static void main(String[] args) {

		char ch = '핳'; // 자바에서 char는 유니코드
		System.out.println(ch);
		System.out.println((int) ch);

		// 자바에서는 short byte는 쓰지말자
		int b = 3;
		// short a = b + 4; //-> 컴파일 에러
		int c = -3;
		int d = +3; // 자리맞춤, 의도적으로 +를 붙임

		int n1 = 3;
		System.out.println(n1);
		n1++;
		System.out.println(n1);
		++n1;
		System.out.println(n1);

		int n2 = n1++;
		System.out.println(n1 + " " + n2);// 6 5

		int n3 = ++n1;
		System.out.println(n3 + " " + n2);

		// int n4 = 12345678900; // 유효숫자를 넘으면 에러 발생

		int n4 = 4;
		int n5 = 3;
		int n6;

		if (n4 > n5) {
			n6 = 10;
		} else {
			n6 = 20;
		}
		System.out.println(n6);
		n6 = (n4 > n5) ? 10 : 20;
		System.out.println(n6);

		System.out.println("---------------------------------------------------------------------------");

		Random rn = new Random(); 

		int num = rn.nextInt(100);
		System.out.println(num);

		for (int i = 0; i < 10; i++) {
			int random = (int)(Math.random()*6)+1;
			System.out.println(random); 
		}

		for (int i = 1; i <= 10; i++) {
			System.out.println("5 * " + i +" = "+ i*5 );
		}
	}
}