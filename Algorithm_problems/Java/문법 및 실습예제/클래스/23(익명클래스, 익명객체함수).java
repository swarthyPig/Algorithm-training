import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple { // 한개 이상의 추상 함수가 있을때는 반드시 그 함수는 추상클래스 이어야 한다
	
	abstract void func01();
}

class Orange extends Apple {

	@Override
	void func01() {
		System.out.println("함수 1번 call");
	}

}

public class Young {

	public static void main(String[] args) {

		// ex 1)
		Orange o1 = new Orange();

		o1.func01();

		// ex 2)
		Apple a1 = new Apple() { // 익명클래스, 실제로 사용 많이됨, 중요하다
			void func01() {
				System.out.println("예제 2");
			}
		};
		a1.func01();

		// ex3
		Apple a2 = new Apple() { // 간단하게 만드는 방법
			@Override // 어노테이션
			void func01() {
				System.out.println("예제 3");
			}
		};
		a2.func01();

		// ex4
		new Apple() { // 익명 객체 사용 함수
			@Override
			void func01() {
				System.out.println("예제 4");
			}
		}.func01(); // 바로실행

		// ex5
		new Apple() { // 함수 call 안하면 의미없이 사라진다.
			@Override
			void func01() {
				System.out.println("예제 5");
			}
		};
		

	}
}
