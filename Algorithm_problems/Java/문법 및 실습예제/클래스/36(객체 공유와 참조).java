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

}

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		Tiger t2 = new Tiger();
		Tiger t3;
		t3 = t1; // 참조
		System.out.println(t1);
		System.out.println(t2);
		System.out.println(t3);

		if (t1 == t3) {
			System.out.println("호랑이");
		} else {
			System.out.println("코끼리");
		}

		if (t1 == t2) {
			System.out.println("호랑이");
		} else {
			System.out.println("코끼리");
		}

		String s1 = "호랑이"; // 기존에 사용하고있는 데이터이면 내부적으로 공유 해버림(같은객체)
		String s2 = "호랑이";

		if (s1 == s2) {
			System.out.println("같다");
		} else {
			System.out.println("다르다");
		}

		String s3 = new String("호랑이"); // 공유하기전에 무조건 메모리를 새로 만든다(다른객체)
		String s4 = new String("호랑이");

		if (s3 == s4) {
			System.out.println("같다");
		} else {
			System.out.println("다르다");
		}

		if (s3.equals(s4)) { // 값을 비교
			System.out.println("같다");
		} else {
			System.out.println("다르다");
		}

		String s5 = "호랑이";
		String s6;

		s6 = s5;
		if (s5 == s6) {
			System.out.println("같다");
		} else {
			System.out.println("다르다");
		}
		s6 = "앵무새"; // 기존 객체는 공유가 끊겨버림, 앵무새 객체랑 공유가 된것
		System.out.println(s6);

	}
}
