import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

interface Animal {

	Animal f1();

	Animal f2();

	Animal f3();
}

//is a, has a 관계
public class Young {

	public static void main(String[] args) {

		// 체이닝 예시
				new Animal() { // 체이닝을 하려면 함수 리턴을 this로 해줘야됨

					@Override
					public Animal f1() {
						// TODO Auto-generated method stub
						System.out.println("f1 call");
						return this;
					}

					@Override
					public Animal f2() {
						// TODO Auto-generated method stub
						System.out.println("f2 call");
						return this;
					}

					@Override
					public Animal f3() {
						// TODO Auto-generated method stub
						System.out.println("f3 call");
						return this;
					}
					
				}.f2().f1().f3();
	}
}
