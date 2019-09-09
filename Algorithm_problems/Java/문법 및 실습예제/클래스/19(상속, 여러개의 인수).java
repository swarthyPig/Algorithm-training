import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Apple { // 부모
	
	Apple() { // 생성자
		System.out.println("부모 생성자 call");
	}
	
	Apple(int a) {
		System.out.println("부모 생성자 call");
		System.out.println(a);
	}
	Apple(int a, int b) {
		System.out.println("부모 생성자 call");
		System.out.println(a+" "+b);
	}
}

class Orange extends Apple { // 자식
	
	Orange() {
		//super();
		//super(10);
		super(10, 20);
		System.out.println("자식 생성자 call");
	}
	Orange(int a, int b, int c){
		super(10);
		System.out.println(a+" "+b+" "+c);
	}
}

public class Young {

	public static void main(String[] args) {

		Orange o1 = new Orange(10, 20, 30); 
	}
}