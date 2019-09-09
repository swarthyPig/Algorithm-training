import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

interface A {
	void func01();
}

interface B {
	void func02();
}

class C implements A, B { // interface는 다중상속 가능

	@Override
	public void func01() {
		System.out.println("함수 1번 call");
	}

	@Override
	public void func02() {
		System.out.println("함수 2번 call");
	}

}

class D {
	void func3() {

	}
}

class E extends D implements A, B { // 동시 사용 가능
	@Override
	public void func01() {
		// TODO Auto-generated method stub

	}

	@Override
	public void func02() {
		// TODO Auto-generated method stub

	}
}

public class Young {

	public static void main(String[] args) {

		C c = new C();
		c.func01();
		c.func02();
		// Integer
	}
}
