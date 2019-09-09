import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Tiger {
	private void func01() {
		System.out.println("수박을 산다.");
	}

	private void func02() {
		System.out.println("수박을 쪼갠다.");
	}

	private void func03() {
		System.out.println("수박을 먹는다.");
	}

	void func04() { // 캡슐화(private) 외부에서 사용 x

		func01();
		func02();
		func03();
	}

	private void 기침약() {
		System.out.println("기침이 나았습니다.");
	}

	private void 콧물약() {
		System.out.println("콧물이 멈췄습니다.");
	}

	private void 두통약() {
		System.out.println("두통이 나았습니다.");
	}

	void 종합감기약() {
		기침약();
		콧물약();
		두통약();
	}
}

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
		t1.func04();
		t1.종합감기약();

	}
}
