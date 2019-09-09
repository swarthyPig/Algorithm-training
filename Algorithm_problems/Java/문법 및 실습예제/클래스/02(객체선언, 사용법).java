import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시

class Tiger {
	//표준타입
	byte a = 10;
	short b = 20;
	char c = 'A';
	int d = 30;
	long e = 40;
	float f = 50.0f;
	double g = 60.0;
	boolean h = true;
	
	String s1 = "호랑이";
	String s2 = new String();
	String s3 = new String("코끼리");
	String s4;
}

public class Young {
	
	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		
		System.out.println(t1.a);
		System.out.println(t1.b);
		System.out.println(t1.c);
		System.out.println(t1.d);
		System.out.println(t1.e);
		System.out.println(t1.f);
		System.out.println(t1.g);
		System.out.println(t1.h);
		System.out.println(t1.s1);
		System.out.println(t1.s2);
		System.out.println(t1.s3);
		System.out.println(t1.s4); // 사용 못하는 것의 값은 NULL
	}
}