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
	// int a=10, b=20;
	int a, b;

	Apple() { // 어차피 0으로 초기화 되니까 비워두는게 통상
		a = 0;
		b = 0;
		System.out.println("생성자 call");
	}

	Apple(int x, int y) {
		a = x;
		b = y;
	}
}

public class Young {

	public static void main(String[] args) {
		Apple a1 = new Apple();
		System.out.println(a1.a + " " + a1.b);

		Apple a2 = new Apple(100, 200);
		System.out.println(a2.a + " " + a2.b);

		Apple a3 = new Apple(30, 40);
		System.out.println(a3.a + " " + a3.b);
	}
}