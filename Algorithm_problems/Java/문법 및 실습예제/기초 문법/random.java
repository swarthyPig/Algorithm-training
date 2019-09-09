import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
public class Young {

	public static void main(String[] args) {

		Random rn = new Random(); // 클래스를 이용하여 객체를 생성한다.

		//1.
		rn.nextInt();
		int num = rn.nextInt();
		System.out.println(num);

		//2.
		System.out.println(rn.nextInt());

		//3.
		System.out.println(rn.nextInt(100)); //0~100사이의 숫자 랜덤

		for (int i = 0; i < 10; i++) {
			System.out.println(rn.nextInt(100));
		}

		int rn2 = (new Random()).nextInt(100);
		System.out.println(rn);
		System.out.println((new Random()).nextInt(100));
	}
}