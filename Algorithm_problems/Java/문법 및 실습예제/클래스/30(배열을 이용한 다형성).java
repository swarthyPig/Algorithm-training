import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

//다형성 : 다양한 형태의 결과가 오버라이딩 되는 것
//목적 : 코드를 최적화 시킬 수 있다.
class Animal {
	void walk() {
		System.out.println("걸어갑니다");
	}

	void cry() {
		System.out.println("저는 소리를 낼 수 없어요");
	}
}

class Tiger extends Animal {
	@Override
	void cry() {
		System.out.println("어흥");
	}
}

class Lion extends Animal {
	@Override
	void cry() {
		System.out.println("크아아앙");
	}
}

class Dog extends Animal {
	@Override
	void cry() {
		System.out.println("멍멍");
	}
}

class Snake extends Animal {

}

public class Young {

	public static void main(String[] args) {

		Animal a1 = new Tiger();
		a1.walk();
		a1.cry();

		Animal a2 = new Lion();
		a2.walk();
		a2.cry();

		Animal a3 = new Dog();
		a3.walk();
		a3.cry();

		Animal a4 = new Snake();
		a4.walk();
		a4.cry();

		Tiger t1 = new Tiger();
		Lion l1 = new Lion();
		Dog d1 = new Dog();
		Snake s1 = new Snake();

		t1.cry();
		l1.cry();
		d1.cry();
		s1.cry();

		System.out.println();
		// 배열을 이용한 다형성(코드 최적화)
		Animal[] a = new Animal[4]; // 배열이 만들어진 것이지 객체가 만들어진 것이 아님.
		a[0] = new Tiger(); // 부모=자식 업캐스팅
		a[1] = new Lion();
		a[2] = new Dog();
		a[3] = new Snake();

		for (int i = 0; i < a.length; i++) {
			a[i].cry();
		}

		Animal[] a5 = { 
				new Tiger(), 
				new Lion(), 
				new Dog(), 
				new Snake() 
		};

		for (int i = 0; i < a.length; i++) {
			a5[i].cry();
		}

	}
}
