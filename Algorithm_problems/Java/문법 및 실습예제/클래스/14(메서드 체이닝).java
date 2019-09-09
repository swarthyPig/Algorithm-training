import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Apple {
	
	int a, b;
	
	Apple(){
		System.out.println("생성자 call");
	}
	
	void func1() {
		System.out.println("1번 call");
	}
	
	void func2() {
		System.out.println("2번 call");
	}
	
	void func3() {
		System.out.println("3번 call");
	}
	
	Apple func4() {
		System.out.println("4번 call");
		return this;
	}
	
	Apple func5() {
		System.out.println("5번 call");
		return this;
	}
	
	Apple func6() {
		System.out.println("6번 call");
		return this;
	}
	
	// 체이닝 사용 목적
	Apple func7() {
		System.out.println("경고");
		return this;
	}
	
	Apple func8() {
		System.out.println("알림");
		return this;
	}
	
	Apple func9() {
		System.out.println("서버와 접속이 종료 되었습니다.");
		return this;
	}
	
	Apple func10() {
		System.out.println("네트워크 상태가 좋지 않습니다.");
		return this;
	}
	
	Apple func11() {
		System.out.println("프로그램을 종료합니다.");
		return this;
	}
	
	Apple func12() {
		System.out.println("잠시만 기다려 주세요.");
		return this;
	}
	
	Apple 더하기(int n) {
		a = a + n;
		return this;
	}
	
	Apple 곱하기(int n) {
		a = a * n;
		return this;
	}
	
	Apple 빼기(int n) {
		a = a - n;
		return this;
	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple();
		
		a1.func1();
		
		System.out.println(a1);
		a1.func4();
		System.out.println(a1.func4());
		
	
		Apple a2 = a1.func4();
		System.out.println(a2);
		
		a1.func4().func1(); // 헛방되기 일보직전에 this가 넘어왔으니까 this.객체를 쓸수있다, .뒤에 1~4번함수 전부 사용가능
		
		// 체이닝(return this가 꼭 있어야됨 ) 기능을 조합해서 사용할때 씀
		a1.func4().func4().func4().func4();
		
		a1.func6().func5().func4().func5();
		
		a1.func6().func1();
		
		a1.func7().func10().func12(); // 세트인것처럼 보이게 하기위해
		
		a1.func7(); //한 세트인줄 모르고 중간에 코드를 추가할 실수 방지하기위해 
		System.out.println("앵무새");
		a1.func10();
		a1.func12();
		
		Apple a3 = new Apple();
		
		a3.a = 10;
		
		a3.곱하기(3).빼기(7).더하기(15).곱하기(30);
		System.out.println(a3.a);
	}
}
