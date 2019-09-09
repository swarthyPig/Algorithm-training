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

		System.out.printf("%d\n", 3);
		System.out.println(10+20); //숫자 + 숫자
		System.out.println(10+"20"); // 숫자 + 문자열 = 문자열
		System.out.println("20"+10); // 문자열 + 숫자 = 문자열
		System.out.println(10+20+"20"); // 숫자+숫자+문자열
		System.out.println("20"+10+20); // 문자열 + 숫자 + 숫자
		System.out.println("20"+(10+20)); // 문자열 + (숫자 + 숫자) : 연산자 우선순위
		System.out.println(10+" "+20); // 숫자 + 공백 + 숫자
	}
}