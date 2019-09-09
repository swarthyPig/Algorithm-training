import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

//추상 class : 안에 실행함수가 있을 수  있다
//interface : 처음부터 실행함수 없음

/*abstract class Animal{

	abstract void f1();

	abstract void f2();

	abstract void f3();
}*/

interface Animal { // 객체생성 할 수 없음

	void f1();

	void f2();

	void f3();
}

class Tiger implements Animal { // 인터페이스 함수는 public 필수!

	@Override
	public void f1() {
		// TODO Auto-generated method stub
		System.out.println("함수 1번 call");
	}

	@Override
	public void f2() {
		// TODO Auto-generated method stub
		System.out.println("함수 2번 call");

	}

	@Override
	public void f3() {
		// TODO Auto-generated method stub
		System.out.println("함수 3번 call");

	}

}

//is a, has a 관계
public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();

		t1.f1();
		t1.f2();
		t1.f3();

		Animal a1 = new Animal() {
			@Override
			public void f1() {
				// TODO Auto-generated method stub
				System.out.println("함수 4번 call");

			}

			@Override
			public void f2() {
				// TODO Auto-generated method stub
				System.out.println("함수 5번 call");

			}

			@Override
			public void f3() {
				// TODO Auto-generated method stub
				System.out.println("함수 6번 call");

			}
		};
		a1.f1();
		a1.f2();
		a1.f3();

		new Animal() {
			@Override
			public void f1() {
				// TODO Auto-generated method stub
				System.out.println("함수 4번 call");

			}

			@Override
			public void f2() {
				// TODO Auto-generated method stub
				System.out.println("함수 5번 call");

			}

			@Override
			public void f3() {
				// TODO Auto-generated method stub
				System.out.println("함수 6번 call");

			}
		}.f1(); // 한개 밖에못씀
	}
}
