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
class 비행기 {

	연료 fuel; // 연료 필드 선언

	// injection : 주입, 생성자에서 필요로 하는 객체를 this로 받아서 함수가 필요할때 바로 사용하는 것
	비행기(연료 fuel) {// 생성자에 객체를 한번만 던져주면 나머지 함수는 인수전달 할 필요가 없어서 속도향상
		System.out.println("비행기 생성자 call");
		this.fuel = fuel; // 비행기의 생성자 인수를 fuel로 받아서 저장한다
	}

	void 날다() {
		fuel.주입();
		System.out.println("비행기가 날아갑니다");
	}

	void 걷다() {
		fuel.주입();
		System.out.println("비행기가 걸어갑니다");
	}

	void 수영하다() {
		fuel.주입();
		System.out.println("비행기가 수영합니다");
	}
}

class 연료 {

	연료() {
		System.out.println("연료 생성자 call");
	}

	void 주입() {
		System.out.println("연료를 주입합니다");
	}
}

public class Young {

	public static void main(String[] args) {

		연료 t1 = new 연료();
		비행기 z1 = new 비행기(t1);
		// a.func01(new Tiger());

		z1.날다();
		z1.걷다();
		z1.수영하다();
	}
}
