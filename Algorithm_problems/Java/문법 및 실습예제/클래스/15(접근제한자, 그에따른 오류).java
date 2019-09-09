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
	// private : 페밀리 전용, 클래스를 벗어나서는 사용 할 수 없음, 데이터 은닉 목적
	
	private int a, b;
	String s;
	
	private Apple(){
		a = 0;
		System.out.println("생성자 call");
	}
	
	private void func1() {
		b = 0;
	}
}

public class Young {

	public static void main(String[] args) {


		Apple a1 = new Apple(); // 생성자에 private 붙이면 발생하는 오류
		a1.a = 20;  // 필드 변수에 private 붙이면 발생하는 오류
		func1(); // 함수에 private 붙이면 발생하는 오류
	}
}
