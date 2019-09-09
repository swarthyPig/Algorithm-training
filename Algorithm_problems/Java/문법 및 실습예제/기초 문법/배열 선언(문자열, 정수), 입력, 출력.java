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
		int[] ar;
		int[] br = {10, 20, 30};
		int[] cr = new int[5];

		for (int i = 0; i < 3; i++) {
			System.out.print(br[i]+" ");
		}System.out.println();

		System.out.println(br.length);
		for (int i = 0; i < br.length; i++) { // ArrayIndexOutOfBoundsException
			System.out.print(br[i]+" ");
		}System.out.println();

		for (int i : br) {
			System.out.print(i+" ");
		}System.out.println();

		for (int i = 0; i < cr.length; i++) {
			cr[i] = i * 10;
		}

		for (int i : cr) { // 또다른 배열 출력 방법
			System.out.print(i + " ");
		}System.out.println();

		String[] dr = {"호랑이", "코끼리", "앵무새"};
		System.out.println(dr); // 메모리주소 : [Ljava.lang.String;@7b1d7fff

		for (int i = 0; i < dr.length; i++) {
			System.out.print(dr[i]+ " ");
		}System.out.println();

		for (String s : dr) {
			System.out.print(s + " ");
		}System.out.println();

		String[] er = new String[5];
		er[0] = "소나무";
		er[1] = "민들레";
		er[2] = "대나무";

		for (String s : er) {
			System.out.print(s + " ");
		}System.out.println();
		//String[] fr = new String();//이렇게 사용 x, 배열선언
		String s1 = new String(); // 변수선언
	}
}
