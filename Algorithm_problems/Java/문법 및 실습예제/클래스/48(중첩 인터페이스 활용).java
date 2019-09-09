import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class View {

	interface onClickListner {
		void onClick();
	}
}

class Button implements View.onClickListner {

	@Override
	public void onClick() {
		// TODO Auto-generated method stub
		System.out.println("함수 1번 call");
	}

}

public class Young {

	public static void main(String[] args) {

		Button c = new Button();
		c.onClick();

		View.onClickListner ab = new View.onClickListner() {

			@Override
			public void onClick() {
				// TODO Auto-generated method stub
				System.out.println("중첩 1번 call");
			}
		};
		ab.onClick();
	}
}
