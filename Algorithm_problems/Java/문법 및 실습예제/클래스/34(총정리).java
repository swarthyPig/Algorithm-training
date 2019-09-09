import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

/*abstract class 연료 {
	abstract void 주입하다();
}*/

// 오늘 배운거 완전체
interface 연료 {
	void 주입하다();
}

interface 날것 {
	void 날다();
	void 걷다();
}

class 비행기 implements 날것 {
	연료 a;

	비행기(연료 a) {
		this.a = a;
	}

	public void 날다() {
		System.out.println("비행기가 날아갑니다.");
		a.주입하다();
	}

	public void 걷다() {
		System.out.println("비행기가 걸어갑니다.");
		a.주입하다();
	}
}

class 로켓 implements 날것 {
	연료 a;

	로켓(연료 a) {
		this.a = a;
	}

	public void 날다() {
		System.out.println("로켓이 날아갑니다.");
		a.주입하다();
	}

	public void 걷다() {
		System.out.println("로켓이 걸어갑니다.");
		a.주입하다();
	}
}

class 드론 implements 날것 {
	연료 a;

	드론(연료 a) {
		this.a = a;
	}

	public void 날다() {
		System.out.println("드론이 날아갑니다.");
		a.주입하다();
	}

	public void 걷다() {
		System.out.println("드론이 걸어갑니다.");
		a.주입하다();
	}
}

class 석탄 implements 연료 {
	public void 주입하다() { // 인터페이스를 받은 함수는 앞에 public을 붙여줘야된다.
		System.out.println("석탄을 주입합니다");
	}
}

class 석유 implements 연료 {
	public void 주입하다() {
		System.out.println("석유를 주입합니다");
	}
}

class 전기 implements 연료 {
	public void 주입하다() {
		System.out.println("물을 주입합니다");
	}
}

public class Young {

	public static void main(String[] args) {

		석탄 a = new 석탄();
		석유 e = new 석유();
		전기 w = new 전기();
		비행기 t = new 비행기(w);
		로켓 r = new 로켓(e);

		t.날다();
		t.걷다();
		r.날다();
		r.걷다();

		석탄 a1 = new 석탄();
		석유 b = new 석유();
		전기 c = new 전기();

		날것[] f = { 
				new 비행기(a1), 
				new 로켓(b), 
				new 드론(c) 
		};

		for (int i = 0; i < f.length; i++) {
			f[i].날다();
		}
	}
}
