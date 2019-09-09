import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Tiger { // 클래스를 만들때 디폴트 생성자를 같이 만들어주자
	Tiger(){
		
	}
	Tiger(int a){ // 사용자가 생성자를 하나라도 만들면 컴파일러는 생성자를 더 이상 만들지 않는다
		
	}
}

class Tiger2{
	int a,b;
	
	Tiger2(){
		System.out.println("생성자 call");
	}
}

class Banana{
	int a,b;
	
	Banana(){
		System.out.println("생성자 call");
	}
}

public class Young {
	
	public static void main(String[] args) {
		
		Tiger t1 = new Tiger();
		
		Banana ba = new Banana();
	}
}