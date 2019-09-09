import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class A { // 가장 많이 사용 하는 방법(99%빈도)
	interface B {
		void func01();
	}
}

class C implements A.B {

	@Override
	public void func01() {
		System.out.println("1번 call");
	}
}

public class Young {

	public static void main(String[] args) {

		C c = new C();
		c.func01();

		A.B ab = new A.B() {
			@Override
			public void func01() {
				System.out.println("함수 1번 익명클래스");

			}
		};
		ab.func01();
	}
}
