import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시

class Tiger {
	
	// 함수의 이름은 같으면서 인수의 개수만 다른 것을 함수 오버로딩 이라고 한다.
	// 함수 오버로딩이란 함수 이름은 동일 하게 작명 할 수 없지만 전달 되는 인수의 갯수가 서로 다를 때는 동일 한 이름으로 작명 할 수 있다.
	// 인수의 개수가 같아도 받는 타입이 다르면 가능하다.
	Tiger(){
		System.out.println("나는 Default 생성자");
	}
	Tiger(int a){
		System.out.println(a);
	}
	Tiger(int a, int b){
		System.out.println(a + " " + b);
	}
	Tiger(int a, int b, int c){
		System.out.println(a + " " + b + " " + c);
	}
	Tiger(float b){ // 인수의 개수가 같아도 받는 타입이 다르면 가능하다
		
	}
	Tiger(String s){
		
	}
}

public class Young {
	
	public static void main(String[] args) {
		
		Tiger t1 = new Tiger(100);
		Tiger t2 = new Tiger(200);
		Tiger t3 = new Tiger();
		Tiger t4 = new Tiger(30,40);
		Tiger t5 = new Tiger(30,40,50);
	}
}
