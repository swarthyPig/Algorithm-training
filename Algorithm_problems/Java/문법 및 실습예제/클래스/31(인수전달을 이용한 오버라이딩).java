import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

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

class Zoo {
	
	void cry(Tiger tiger) {
		tiger.cry();
	}

	void cry(Lion lion) { // 함수 오버로딩이 됨
		lion.cry();
	}

	void cry(Dog dog) { // 함수 오버로딩이 됨
		dog.cry();
	}

	void cry(Snake snake) { // 함수 오버로딩이 됨
		snake.cry();
	}

	void cry(Animal animal) {
		System.out.println("여기는 동물원 입니다.");
		animal.cry();
	}
}

public class Young {

	public static void main(String[] args) {

		Zoo z1 = new Zoo();
		z1.cry(new Tiger());
		z1.cry(new Lion());
		z1.cry(new Dog());
		z1.cry(new Snake());

		Animal[] a = { 
				new Tiger(), 
				new Lion(), 
				new Dog(), 
				new Snake() 
		};
		
		for (int i = 0; i < a.length; i++) {
			z1.cry(a[i]);
		}

	}
}
