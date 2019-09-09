import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Apple { // 우선순위는 필드초기화가 높지만 생성자의 값으로 갱신된다
	int a=10,b=20;
	
	Apple(){
		a = 30;
		b = 40;
		System.out.println("생성자 call");
	}
	
	Apple(){
		int a = 30, b = 40; // 필드에있는 a랑 생성자안에 있는 a랑은 완전히 다름, 스코프가 끝나면 사라짐
		System.out.println("생성자 call");
	}
	
	Apple(){// 지역변수에서 먼저찾고 그다음 필드, 가까이 있는 놈을 사용
		int a, b; 
		a= 30;
		b = 40;
		System.out.println("생성자 call");
	}
	
	Apple(){ // this : 나의 가족(객체)안에 들어있는 
		int a, b; 
		this.a= 30; // 필드에 선언되어있는 변수에 값을 전달
		this.b = 40;
		System.out.println("생성자 call");
	}
	
	Apple(int x, int y){ 
		a = x;
		b = y;
		System.out.println("생성자 call");
	}
	
	Apple(int a, int b){ 
		//a = a; // 자기대입, 아무런 의미없음
		//b = b;
		this.a = a;
		this.b = b;
		System.out.println("생성자 call");
	}
}

public class Young {

	public static void main(String[] args) {
		
		Apple a1 = new Apple(100, 200);
		System.out.println(a1.a + " " + a1.b);
	}
}