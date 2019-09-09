import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

abstract class Apple { // 추상 클래스
	// 추상(미완성) 클래스, 미완성이라서 객체 생성이 안됨, 무조건 상속 받아서 사용해라!
	// 프로그래머에게 UI를 제공하기위해서 사용한다
	
	 Apple() { // 생성자
		System.out.println("Apple 생성자 call");
	 }
	 
	 void func01() {
		 System.out.println("함수 1번 call");
	 }
	 
	 // 추상 함수
	 abstract void func02(); 
	 // 강제로 함수를 만들어 줘야됨
	 abstract void func03();
}

class Orange extends Apple { // 추상클래스를 상속받음
	
	Orange() { 
		System.out.println("Orange 생성자 call");
	 }

	@Override
	void func02() { // 추상함수 override
	System.out.println("추상 함수 2번 call");
	}

	@Override
	void func03() { // 추상함수 override
		System.out.println("추상 함수 3번 call");
		
	}
}

public class Young {

	public static void main(String[] args) {

		Orange o1 = new Orange();
		o1.func01();
		o1.func02();
		o1.func03();
		
	}
}
