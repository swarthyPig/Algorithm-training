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

}

class Dog extends Animal {
	
	void func01() {
		System.out.println("Dog 1번 call");
	}
}

class Cat extends Animal {
	
	void func01() {
		System.out.println("Cat 1번 call");
	}
}

class Zoo { // zoo에 고양이든 강아지든 던지는데 자기 클래스의 함수 1번을 쓰고싶다, 근데 강아지가 올지 고양이가 올지 모른다
	
	void func02(Animal animal) {
		if (animal instanceof Dog) {
			Dog dog = (Dog) animal; // 다운캐스팅
			dog.func01();
		}

		if (animal instanceof Cat) {
			Cat cat = (Cat) animal; // 다운캐스팅
			cat.func01();
		}
	}
}

public class Young {

	public static void main(String[] args) {

		Animal a1 = new Dog();
		Animal a2 = new Cat();

		Zoo zoo = new Zoo();

		zoo.func02(a1); // 객체를 인수로 던져줌
		zoo.func02(a2);
		// zoo에 고양이든 강아지든 던지는데 자기 클래스의 함수 1번을 쓰고싶다, 근데 강아지가 올지 고양이가 올지 모른다

	}
}
