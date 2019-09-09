import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple { // 추상클래스

	abstract void func01(); // 추상함수 원형

	abstract void func02(); // 추상함수 원형

	void func03() {

	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple() { // 객체 선언할때 함수 오버라이드 

			@Override
			void func01() {
				System.out.println("1번");
			}

			@Override
			void func02() {
				System.out.println("2번");
			}

			@Override
			void func03() {
				System.out.println("3번");
			}
		};
		a1.func01();
		a1.func02();
		a1.func03();
	}
}
