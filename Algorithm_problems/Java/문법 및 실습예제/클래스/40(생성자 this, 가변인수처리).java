import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Tiger{
	
	Tiger(){
		System.out.println("default");
	}
	
	Tiger(int a){
		this();
		System.out.println(a);
	}
	
	Tiger(int a, int b){
		this(a); // 자기 생성자 call
		System.out.println(a);
		System.out.println(a + " " + b);
	}
	
	void func01(int ... a) {// 인수전달이 가변인수일때
		System.out.println("호랑이");
		for (int i = 0; i < a.length; i++) {
			System.out.println(a[i]); 
		}
	}
	// 위에 꺼나 밑에꺼나 똑같은 코드임
	void func02(int[] a) {// 인수전달이 가변인수일때
		System.out.println("호랑이");
		for (int i = 0; i < a.length; i++) {
			System.out.println(a[i]); 
		}
	}
}

public class Young {

	public static void main(String[] args) {
		
		Tiger t1 = new Tiger(10, 20);
		t1.func01(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 );
		int[] ar = {
				1, 2, 3, 4, 5, 
				6, 7, 8, 9, 10, 
				11, 12, 13,14, 15
		};
		t1.func02(ar);
	}
}
