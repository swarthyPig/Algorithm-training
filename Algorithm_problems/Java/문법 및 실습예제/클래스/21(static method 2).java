import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Apple {

	Apple() { // 생성자
		System.out.println("부모 생성자 call");
	}

	static void func01() {// static 함수에서는 static함수만 call 할 수 있다.
		
		// func03();// static 함수에서는 static함수만 call 할 수 있다.
		System.out.println("static 1번 함수 call");
	}

	void func02() {
		func01();
		System.out.println("2번 함수 call");
	}

	void func03() {
		System.out.println("3번 함수 call");
	}
}

public class Young {

	static void func04() {
		System.out.println("static 4번 함수 call");
	}

	void func06() {
		System.out.println("6번 함수 call");
	}

	public static void main(String[] args) {

		Apple a1 = new Apple();

		func04(); // static안에서는 무조건 static만 call할 수 있다.
		func05();

		Young y = new Young();
		y.func06(); // static이 안붙어있으면 클래스 이름으로 객체 생성해서 함수 call하면 됨
	}

	static void func05() {
		System.out.println("static 5번 함수 call");
	}
}
