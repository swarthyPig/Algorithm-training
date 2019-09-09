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
	
	void func01() {
		System.out.println("Animal 부모함수 1번");
	}

	void func03() {
		System.out.println("Animal 부모함수 3번");
	}

}

class Dog extends Animal {
	
	void func02() {
		System.out.println("Dog 자식함수 2번");
	}

	@Override
	void func03() {
		System.out.println("Dog 자식함수 3번");
	}
}

class Cat extends Animal {
	void func02() {
		System.out.println("Cat 자식함수 2번");
	}

	@Override
	void func03() {
		System.out.println("Cat 자식함수 3번");
	}
}

public class Young {

	public static void main(String[] args) {

		Animal d1 = new Dog(); // 부모함수만 사용가능
		d1.func01();
		d1.func03();
		((Dog) d1).func02(); // 함수 2번을 사용 하고 싶을때(다운캐스팅), 객체 직접 다운캐스팅

		Dog d2;
		d2 = (Dog) d1; // 자식 = (자식)부모 (공유받은것), new일때는 안되는데 메모리를 받은 후에는 가능
		d2.func01();
		d2.func02();
		d2.func03();

		Cat c1;
		// c1 = (Cat)d1; // 굉장히 위험함, 고양이 = (고양이)개, java.lang.ClassCastException 발생

		// 여기에서 d1이 누구 객체 인지를 모른다면
		if (d1 instanceof Dog) { // d1이 Dog 타입입니까?
			Dog dog = (Dog) d1;
			dog.func01();
			dog.func02();
			dog.func03();
			// System.out.println("맞다");
		} else {
			System.out.println("아니다");
		}

		Animal a2 = new Cat();
		if (a2 instanceof Cat) { // a2가 Cat 타입입니까?
			Cat cat = (Cat) a2;
			cat.func01();
			cat.func02();
			cat.func03();
		}

	}
}
