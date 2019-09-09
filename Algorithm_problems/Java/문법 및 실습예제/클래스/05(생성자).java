import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시

class Tiger {
	
	// 1. 클래스 이름과 동일한 함수 이름을 가진 함수를 생성자함수 라고 한다.
	// 2. 생성자 함수는 반드시 클래스 이름과 동일 해야 한다.
	// 3. 생성자 함수는 void 키워드를 붙이지 않는다.
	// 4. 생성자 함수는 객체가 생성 될 때 (new)가 자동호출 된다
	// 5. 생성자 함수는 프로그래머가 임의로 호출 할 수 없다.
	// 6. 생성자 함수는 객체가 생성될 때 만 한번 call된다.
	// 7. 생성자 함수도 함수 이므로 Overloding 할수 있다.
	// 8. 생성자 함수의 사용 목적은 변수 초기화이다.
	// 9. 생성자 함수는  인수를 전달 할 수 있는데 인수 전달이 없는 생성자를 Default 생성자라고 한다
	Tiger(){
		System.out.println("호랑이");
	}
}

public class Young {
	
	public static void main(String[] args) {
		
		System.out.println(1);
		Tiger t1 = new Tiger();
		System.out.println(2);
		Tiger t2 = new Tiger();
		System.out.println(3);
		Tiger t3 = new Tiger();
	}
}