import java.util.*;

//실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Apple { // 부모
	// C++에서는 부모 클래스 함수가 가려지지 않는다
	// C++에서는 부모 클래스 함수가 가려지지 않는다
	// 오버로딩 : 메소드이름은 같지만 인자이 개수가 다를때 허용되는 것
	// 오버라이딩 : 상속관계에서 메서드 이름이 같은 것
	Apple() { // 생성자

		System.out.println("부모 생성자 call");
	}

	void func02() {
		System.out.println("부모 함수 2번 call");
	}

	void func03() { // 비활성
		System.out.println("부모 함수 3번 call");
	}

	void func04() {
		System.out.println("부모 함수 4번 call");
		func03(); // 부모함수가 비활성화, 자식함수 사용
	}

	void func05() {
		System.out.println("부모 함수 5번 call");
	}

	void func06() {
		System.out.println("부모 함수 6번 call");
		func05();
	}
}

class Orange extends Apple { // 자식
	
	Orange() { // 생성자
		super(); // 생략되어있음, 부모생성자를 call하세요 , 반드시 코드 첫줄에 나와야됨.
		System.out.println("자식 생성자 call");
	}

	void func01() {
		System.out.println("자식 함수 1번 call");
	}

	void func03() {
		System.out.println("자식 함수 3번 call");
	}

	void func05() {
		super.func05(); // 부모함수 호출할 수 있다
		System.out.println("자식 함수 5번 call");
	}

}

public class Young {

	public static void main(String[] args) {

		Orange o1 = new Orange(); // 부모생성자 -> 자식생성자, super때문에
		/*부모 생성자 call
		자식 생성자 call*/
		
		o1.func01(); // 자식함수 1번 호출
		// 자식 함수 1번 call
		
		o1.func02(); // 자식 클래스에 가서 2번을 찾아본 후 없으면 부모 클래스에서 찾아 쓴다
		// 부모 함수 2번 call
		
		o1.func03(); // 부모, 자식 둘다 3번이 있을때, 호출하면 자기 클래스의 3번을 사용한다
		// 자식 함수 3번 call
		
		o1.func04(); // 부모 함수가 비활성화되어, 자식함수를 사용하게된다
		/*부모 함수 4번 call
		자식 함수 3번 call*/
		
		o1.func05(); // 자식함수 5번 -> 부모함수 5번 call -> 자식함수 5번 call
		/*부모 함수 5번 call
		자식 함수 5번 call*/
		
		o1.func06(); // 자식함수에 6번이 없으므로 부모함수 6번으로 감 -> 부모함수 6번 call -> 자식 함수 5번  call -> 부모함수 5번 call -> 자식함수 5번 call
		/*부모 함수 6번 call
		부모 함수 5번 call
		자식 함수 5번 call*/

	}
}
