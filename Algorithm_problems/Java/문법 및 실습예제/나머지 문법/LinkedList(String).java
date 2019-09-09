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

		LinkedList<String> li = new LinkedList<>();

		li.add("호랑이");

		for (int i = 0; i < 6; i++) {
			li.add("코끼리" + i);
		}
		li.add(3, "앵무새");

		System.out.println("[출력 1번째 방법]");
		System.out.println(li); // 1번째 방법

		System.out.println("[출력 2번째 방법]");
		for (int i = 0; i < li.size(); i++) {// 2번째 방법
			System.out.print(li.get(i) + " ");
		}System.out.println();

		System.out.println("[출력 3번째 방법]");
		for (String i : li) {// 3번째 방법
			System.out.print(i + " ");
		}System.out.println();

		System.out.println("[출력 4번째 방법]");
		Iterator<String> it = li.iterator();
		while (it.hasNext()) {// 4번째 방법
			String str = it.next();
			System.out.print(str + " ");
		}System.out.println();

		System.out.println("[업데이트]");
		li.set(4, "공룡");
		li.set(5, "사자");
		li.set(6, "개미");
		System.out.println(li);

		System.out.println("[삭제 1번째 방법]");
		li.remove(4);
		System.out.println(li);
		System.out.println("[삭제 2번째 방법]");
		for (int i = 0; i < li.size();) {
			if (li.get(i) == "앵무새") {
				li.remove(i);
			} else {
				i++;
			}
		}
		System.out.println(li);
		
		System.out.println("[삭제 3번째 방법]");
		it = li.iterator();
		while (it.hasNext()) {
			String n = it.next();
			if (n.equals("개미")) {
				it.remove();
			}
		}
		System.out.println(li);
	}
}
