import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class A {

}

class B extends A {

}

class D { // 중첩 클래스
	void func01() {
		System.out.println("함수 1번 call");
	}

	class C {
		void func02() {

		}
	}
}

public class Young {

	public static void main(String[] args) {

		D d1 = new D();
		d1.func01();

		D.C d2 = d1.new C(); // 중첩 클래스 사용법
		d2.func02();
	}
}
