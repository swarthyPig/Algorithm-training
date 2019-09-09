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
	int a,b;
	//Apple this;
	
	Apple(){
		System.out.println("생성자 call");
		System.out.println(this); // this와 a1은 공유되어있다.
		//this = a1; //모든 객체는 this를 가지고 있다.
		this.a = 10;;
	}
}

public class Young {

	public static void main(String[] args) {
		
		Apple a1 = new Apple(); // this와 a1은 공유되어있다.
		System.out.println(a1);
		System.out.println(a1.a + " " + a1.b);
		
		Apple a2 = new Apple();
		System.out.println(a2);
		
		a1.a = 10;
	}
}