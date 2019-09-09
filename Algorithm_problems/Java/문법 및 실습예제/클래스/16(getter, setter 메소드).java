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

	private int color, price; // private 필드 변수

	Apple() { // 생성자

		System.out.println("생성자 call");
	}

	// public은 안붙여주면 디폴트
	public int getColor() { // getter 메소드
		return color;
	}

	public void setColor(int color) { // setter 메소드
		this.color = color;
	} // 지역변수를 필드 변수에 넣음

	public int getPrice() { // getter 메소드
		return price;
	}

	public void setPrice(int price) { // setter 메소드
		this.price = price;
	}

	void showInfo() { // 내부에 있는 필드값을 보여주는 함수
		System.out.println(color + " " + price);
	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple();

		// 값을 넣을때는 setter 메소드 이용
		a1.setColor(100);
		a1.setPrice(1000);

		// 값을 출력할때는 getter 메소드 이용
		System.out.println(a1.getColor() + " " + a1.getPrice());

		a1.showInfo();
	}
}
