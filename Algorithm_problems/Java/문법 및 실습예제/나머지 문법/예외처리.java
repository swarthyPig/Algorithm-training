import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Tiger {
	Exception func01() throws Exception {
		System.out.println("Tiger 1번함수 Call");
		return new Exception();
	}
}

public class Young {

	public static void main(String[] args) {

		// ClassCastException 캐스팅 관련 예외

		// int a = 3 / 0;
		// ArithmeticException 수학관련 예외

		// int[] ar = new int[3];
		// ar[5] = 10;
		// ArrayIndexOutOfBoundsException

		// String s = null;
		// s.toString();
		// NullPointerException 객체 생성 하기전에 사용 하려고 해서 발생

		System.out.println("호랑이");
		
		try {
			int a = 5 / 0;
		} catch (Exception e) {
			e.printStackTrace(); // Exception의 내용을 출력해줌
		}
		System.out.println("코끼리");

		Tiger t1 = new Tiger();

		try {
			t1.func01(); // 무조건 받아라(try-catch), Unhandled exception
		} catch (Exception e) {

			e.printStackTrace();
		}

		try {
			for (int i = 0; i < 10; i++) {
				System.out.println(i);
				Thread.sleep(1000); // 시간지연함수
			}

		} catch (Exception e) {

			e.printStackTrace();
		}

	}
}
