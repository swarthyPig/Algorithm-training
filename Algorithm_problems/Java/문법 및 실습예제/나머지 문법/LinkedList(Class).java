import java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

class Tiger {
	int n;
	String s;

	public Tiger(int n, String s) {
		super();
		this.n = n;
		this.s = s;
	}

	void show() {
		System.out.print(n + "" + s + " ");
	}
}

public class Young {

	public static void main(String[] args) {

		LinkedList<Tiger> li = new LinkedList<>();

		// 입력 1번째 방법
		Tiger t1 = new Tiger(10, "호랑이");
		li.add(t1);

		// 입력 2번째방법
		li.add(new Tiger(20, "코끼리"));

		System.out.println(li); // 민증 번호만 나옴

		for (int i = 0; i < 5; i++) {
			li.add(new Tiger(i * 100 + 100, "앵무새" + i));
		}

		// 출력 1
		for (int i = 0; i < li.size(); i++) {
			Tiger tt = li.get(i);
			tt.show();
			//li.get(i).show(); //위랑 같은 방법
		}
		System.out.println();
		// 출력 2
		for (Tiger i : li) {
			i.show();
		}
		System.out.println();

		// 출력 3
		Iterator<Tiger> it = li.iterator();
		while (it.hasNext()) {
			Tiger tt = it.next();
			tt.show();
			//it.next().show();
		}
		System.out.println();
	}
}
