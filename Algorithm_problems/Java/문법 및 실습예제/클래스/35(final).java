import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

final class Tiger{
	// final : 변수앞, class앞, method앞에 사용
	// 변수 : 변수값 대입 여기서 마지막, 더이상 대입 불가(상수화)
	// class : 더 이상 상속 할 수 없다
	// method : 더 이상 Override 불가
	
	final int a = 10;
	static final double PI = 3.14;
	static final int b = 0;
	
	Tiger(){
		// b = 0;
	}
	
	static void func01() {
	
	}
	
}

/*class Lion extends Tiger{ // Tiger 클래스의 final 때문에 아무것도 못함
	@Override
	void func01() {

	}
}*/

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
	}
}
