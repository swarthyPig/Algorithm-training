import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

public class Young {

	public static void main(String[] args) {

		String s1 = new String("무궁화꽃이피었습니다무궁");
		System.out.println(s1);

		System.out.println(s1.toString()); // 정석출력 코드
		System.out.println(s1.length());
		char c1 = s1.charAt(3);
		System.out.println(c1 + " " + s1.charAt(4));

		String s2 = new String("무궁화꽃이피었습니다");

		System.out.println(s1.equals(s2)); // 문자열 비교

		String s3 = new String("ABCDEFG");
		byte[] ar = s3.getBytes(); // 네트워크에서 값을 던질때 byte만 가능
		for (int i = 0; i < ar.length; i++) {

			System.out.println((char) ar[i]);

		}

		int n1 = s1.indexOf("가나다"); // 첫글자의 index 번호
		System.out.println(n1); // 찾는 문자열이 없으면 -1반환

		String s4 = s1.replace("무궁", "민들레");
		System.out.println(s4);

		s1 = s1.replace("무궁", "소나무"); // 기존 s1메모리를 해제시키고 새로운 s1을 만듬
										// String은 안에 값을 변경 시킬 수 없음. 새로운 객체가 만들어진 것임
										// 비용이 발생한다.
		System.out.println(s1);

		String s5 = new String("무궁화꽃이피었습니다.");
		String s6 = s5.substring(2, 5);
		System.out.println(s6);

		String s7 = s5.substring(3);
		System.out.println(s7);

		String s8 = new String("Apple");
		String s9 = s8.toLowerCase();
		System.out.println(s9);

		String s10 = s8.toUpperCase();
		System.out.println(s10);

		String s11 = new String("  Apple Banana Orange  "); // 텍스트의 앞과 뒤의 공백 제거
		String s12 = s11.trim();
		System.out.println(s12);

		StringBuffer s13 = new StringBuffer("무궁화꽃이피었습니다"); // String 은 자기가 가지고있는 내용수정이 불가하지만 StringBuffer는 수정가능
		System.out.println(s13);
		s13.append("코끼리"); // 끝에 추가됨
		System.out.println(s13); // 끝에 추가됨

		s13.insert(4, "호랑이");// 해당 위치에 중간에 추가
		System.out.println(s13);

		s13.setCharAt(4, '한');// 해당 위치의 글자를 바꿔줌
		System.out.println(s13);

		System.out.println(s13.length());

		s13.delete(2, 4); // 2~4번 앞까지 삭제
		System.out.println(s13);

		String s14 = s13.toString();
		System.out.println(s14);

		String s15 = new String("호랑이");
		StringBuffer s16 = new StringBuffer();

		s16 = s16.append(s15.toString()); // StringBuffer 값을 String에 넣는 방법
		System.out.println(s16);
	}
}
