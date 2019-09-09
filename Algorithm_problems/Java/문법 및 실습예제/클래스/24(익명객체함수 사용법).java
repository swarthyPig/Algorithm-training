import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple {
	abstract void func01();
}

class Tiger {
	void func02(Apple apple) {
		apple.func01();
	}
}

public class Young {

	public static void main(String[] args) {

		// 익명객체 목적 : 함수의 인수로 코드를 전달할 수 있다.
		Tiger t1 = new Tiger();
		t1.func02(new Apple() {
			@Override
			void func01() {
				System.out.println("사과를 먹자");
			}
		});

		t1.func02(new Apple() {
			@Override
			void func01() {
				// TODO Auto-generated method stub
				System.out.println("사과를 깍자");
			}
		});
	}
}
