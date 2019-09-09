import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시

class Tiger {
	// 변수(field) 영역

	// 생성자 영역

	// 함수(method) 영역
}

public class Young {
	/*
	 * 1. 클래스의 3대요소 : 생성자, 변수(field), 함수(method) 
	 * 2. 클래스 이름은 암묵적으로 첫 글자가 대문자 이다. Scanner, String, System, Random, Integer 
	 * 3. 클래스의 최종 목적지는 상속이다. 상속의 최종 목적지는 다형성이다.
	 */
	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		// 토끼 t2 = new 토끼();
		// C언어 에서 : 토끼 *t3 = new 토끼[10];
		// t1 = 객체
		// 객체를 만드는 것 : 인스턴스화
		// 객체 선언과 동시에 객체를 생성한다.

		Tiger t2;
		// t2는 사용불가(초기화를 안해줬기 때문)
		// 객체를 선언한다.

		Tiger t3;
		t3 = new Tiger();

		//System.out.println(t1.a); // default 값은 0
		//System.out.println(t1.b);
		//System.out.println(t1.c);
		//System.out.println(t1.d);
		//System.out.println(t1.e);
		//System.out.println(t1.f);
	}
}