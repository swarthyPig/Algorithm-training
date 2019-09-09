import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Apple { //부모
	Apple(){
		super();
		System.out.println("부모 생성자 call");
	}
}

class Orange extends Apple { // 자식
	Orange(){
		super(); // 생략되어있음, 부모생성자를 call하세요 , 반드시 코드 첫줄에 나와야됨.
		System.out.println("자식 생성자 call");

	}
}

public class Young {

	public static void main(String[] args) {

		//Apple a1 = new Apple(); // 상속하고 아무 관계없다.
		Orange o1 = new Orange(); // 순서 : 자식생성자 call -> 부모 생성자 
	}
}
