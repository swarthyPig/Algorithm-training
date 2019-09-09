import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시

class Tiger {
	int a,b;
}

public class Young {
	
	public static void main(String[] args) {

		Tiger t1 = new Tiger(); // 비행기 1
		Tiger t2 = new Tiger(); // 비행기 2

		t1.a = 10;
		t1.b = 20;

		System.out.println(t1.a+" "+t1.b);
		System.out.println(t2.a+" "+t2.b);	

		Tiger t3; // 사용못함
		// 대입연산자는 일반 타입은 대입이 일어나지만 객체는 공유가 일어난다
		t3 = t1; // 대입이 일어나는 것이 아니고 공유가 일어난다, 참조가 일어났다
		// t1(t3),t2 실제존재하는 객체는 2개

		t1 = t2; // 남아있는 메모리가 t1(t2), t3 이다.

		t3 = t1; // 이 코드 이후에는 객체가 1개만 존재

		System.out.println(t3.a+" "+t3.b);

		System.out.println(t1); // t1의 메모리 주소 : @299a06ac
		System.out.println(t2);	// t2의 메모리 주소 : @383534aa 공유받고 난뒤는@299a06ac
		System.out.println(t3); // t3의 메모리 주소 : @299a06ac
	}
}