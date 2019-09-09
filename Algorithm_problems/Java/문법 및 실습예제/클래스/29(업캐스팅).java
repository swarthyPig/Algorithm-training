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

	Animal() { // 생성자
		System.out.println("Animal 생성자 call");
	}

	void func01() {
		System.out.println("부모 함수 1번 call");
	}

	void func03() { // 부모 함수가 가려진다(오버라이딩)
		System.out.println("부모 함수 3번 call");
	}
}

class Tiger extends Animal { // Animal 클래스 상속
	
	Tiger() { // 생성자
		System.out.println("Tiger 생성자 call");
	}

	void func02() {
		System.out.println("자식 함수 2번 call");
	}

	void func03() {
		System.out.println("자식 함수 3번 call");
	}
}

//업캐스팅 : 어떤 식으로든 안전하다(99%) 부:자 관계 -> A:B
//다운캐스팅 : 자식을 따라간다(시스템 다운될수도 있다)(1%) 자:부 관계 -> B:A
//대입연산자의 왼쪽은 문법(구사할 수 있는 부분) 오른쪽은 메모리(사용할 수 있는 부분)
public class Young {

	public static void main(String[] args) {

		Animal a2 = new Tiger(); // 부모 문법 밖에 사용 못함, 부모=자식
		// Tiger t2 = (Tiger)new Animal(); // 다운캐스팅은 new로 할수없다. 겉으로는 오류안나지만 내막적으로는 죽는다

		a2.func01();
		// a2.func02(); 부모 문법 밖에 사용 못해서 오류남(사용하지 못할 뿐 메모리는 존재함)
		a2.func03();

	}
}
