import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

//인수전달하는데 비용이 많이듬 (메모리도 많이들고 속도도 느려짐), 인수전달은 안 할 수 있으면 하지말자
class Zoo {

	Tiger tiger; // tiger 필드 선언

	Zoo(Tiger tiger) {// 생성자에 객체를 한번만 던져주면 나머지 함수는 인수전달 할 필요가 없어서 속도향상
		System.out.println("Zoo 생성자 call");
		this.tiger = tiger; // zoo의 생성자 인수를 tiger로 받아서 저장한다
	}

	void func01() {
		tiger.cry();
	}

	void func02() {
		tiger.eat();
	}

	void func03() {
		tiger.walk();
	}
}

class Tiger {

	Tiger() {
		System.out.println("Tiger 생성자 call");
	}

	void cry() {
		System.out.println("어흥");
	}

	void eat() {
		System.out.println("호랑이가 먹습니다.");
	}

	void walk() {
		System.out.println("호랑이가 걸어갑니다.");
	}
}

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		Zoo z1 = new Zoo(t1);
		// a.func01(new Tiger());

		z1.func01();
		z1.func02();
		z1.func03();
	}
}
