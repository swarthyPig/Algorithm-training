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

		Tiger t1 = new Tiger(); // new 이름() 객체생성 됨
		Tiger[] t2 = new Tiger[3]; // t2 객체가 만들어 진 것이 아님, 이름이 배열로 3개 만들어진것이다.
		Tiger t3,t4,t5; //위의 코드랑 같은 코드.
		System.out.println(t2[0]);
		System.out.println(t2[1]);
		System.out.println(t2[2]);
		
		for (int i = 0; i < t2.length; i++) {
			t2[i] = new Tiger();
		} 
		
		for (int i = 0; i < t2.length; i++) {
			System.out.println(t2[i]);
		}System.out.println();
		
		Tiger[] t6 = {new Tiger(), new Tiger(), new Tiger()};  // t6 으로 3개 선언
		
		t6[0] = t6[1];
		t6[2] = t6[1]; // 0번 2번 사라짐 총 객체 5개 남음 
	}
}