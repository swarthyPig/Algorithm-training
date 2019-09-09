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
	
	int a, b; // 필드를 선언하다
	
	Apple(){
		System.out.println("생성자 call");
	}
	
	// 생성자 밑에다가 적음
	void func1() {
		System.out.println("함수 1번 call");
	}
	
	void func2(int n) {
		System.out.println(n);
	}
	
	int func3() {
		return 999;
	}
	
	int func4(int n) {
		return n * 10;
	}
	
	void func5() {
		// 자바에는 포인트가 없다 그래서 수월함
		// const가 없다
		// static이 있기는 한데 함수 안에서는 못쓴다
		// 자바에서는 ...문법이 없다
	}
	
	void func6(int n1, int n2) {
		System.out.println(n1 + " " + n2);
	}
	
	int func7(int n1, int n2) {
		return n1+n2;
	}
	
	void func8(int n, float f, boolean b, String s) {
		System.out.println(n);
		System.out.println(f);
		System.out.println(b);
		System.out.println(s);
	}
	
	void func9(Apple apple) {
		System.out.println(apple.a + " " + apple.b);
		System.out.println(apple);
	}
	
	void func10(Apple apple) {
		
		apple.a = 777;
		apple.b = 888;
	}
	
	Apple func11(Apple apple) {
		//return null; // 잠시 오류 피할 때
		return apple;
	}
	
	Apple func12(Apple apple) {
		return apple;
	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple();
		
		a1.func1();
		
		a1.func2(100);
		
		a1.func3(); // 1번째 방법 공중에 날리는 것
		
		int num = a1.func3();// 2번째 방법
		System.out.println(num);
		
		System.out.println(a1.func3()); // 3번째 방법
		
		System.out.println(a1.func4(50));
		
		a1.func6(12, 34);
		
		System.out.println(a1.func7(10, 20));
		
		a1.func8(100, 1.24f, true, "호랑이");
		a1.func8(200, 3.14f, false, new String("코끼리"));
		
		Apple a2 = new Apple();
		a2.a = 100;
		a2.b = 200;
		
		System.out.println(a2);
		a1.func9(a2); // Apple apple = a2; 공유가 일어남
		
		a1.func10(a2);
		System.out.println(a2.a + " " + a2.b);
		
		Apple a3 = new Apple();
		a3.a = 111;
		a3.b = 222;
		Apple a4 = a1.func11(a3);
		a1.func11(a3);
		System.out.println(a4.a+" "+a4.b);
		System.out.println(a3 + " " + a4);
		
		
		a1 = a1.func12(a1);
	}
}
