import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

interface A { // 농사
	void func01();

	interface B { // 밭농사
		void func02();
	}

	interface C { // 논농사
		void func03();
	}
}

class D implements A {
	public void func01() {
		System.out.println("함수 1번 call");
	}
}

class E implements A.B { // A안에 들어있는 B
	public void func02() {
		System.out.println("함수 2번 call");
	}
}

class F implements A.C { // A안에 들어있는 C
	public void func03() {
		System.out.println("함수 3번 call");
	}
}

public class Young {

	public static void main(String[] args) {

		D d = new D();
		d.func01();

		E e = new E();
		e.func02();

		F f = new F();
		f.func03();
	}
}
