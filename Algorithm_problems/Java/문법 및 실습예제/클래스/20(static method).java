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
	int a, b;
	
	private Apple() { // 객체 생성 못하게함
		System.out.println("부모 생성자 call");
	}
	
	static void func01() { // static : 처음부터 만들어진것, 메모리가 객체생성을 안해도 처음부터 존재한다.
		System.out.println("함수 1번 call");
	}
	
	static void func02() { 
		
	}
}

public class Young {

	public static void main(String[] args) {

		System.out.println((new Random()).nextInt(100));

		System.out.println((int)(Math.random()*100)); 
		
		System.out.println((Math.random()));  // Math 클래스의 random 함수는 static으로 되어있다.
		
		Apple.func01(); // static으로 만들어진 메소드만 가능. 클래스이름.메소드이름
		Apple.func02();
		// static 사용이유 :  new를 사용하면 속도가 저하되기 때문에 static 사용함.
		// static 메소드의 객체를 선언하는것을 막기위해 생성자 앞에 private을 붙인다.
		// 변수앞에서도 static을 붙여서 쓸수있다
		Apple.func01();
		Apple.func02();
	}
}
