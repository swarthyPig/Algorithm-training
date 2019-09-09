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
	
	int a,b; // 필드를 선언하다
	int c = 100; // 필드를 선언과 동시에 초기화한다
	
	String s1; // 객체를 선언
	String s2 = new String(); // 객체를 선언과 동시에 생성한다
	
	//a = 30; // 선언, 초기화, 생성 말고는 아무것도 기입 불가
	//c++;
	//this.a  = 10;
	
	Apple(){
		System.out.println("생성자 call");
		System.out.println(this); // this와 a1은 공유되어있다.
		//this = a1; //모든 객체는 this를 가지고 있다.
	}
}

public class Young {

	public static void main(String[] args) {
		
		Apple a1 = new Apple();

		System.out.println(a1.a + " " + a1.b);
		
	}
}