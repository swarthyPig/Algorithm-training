import java.util.*;

class Star {

	int count;
	int age;

	public Star(int count, int age) {
		super();
		this.count = count;
		this.age = age;
	}

}

public class Study {

	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);

		LinkedList<Star> li = new LinkedList<>();

		int num = 0;

		while (true) {

			int su = in.nextInt(); // 정수 입력
			if (su == 999) { // 999가되면 종료

				System.out.println("프로그램이 종료되었습니다");
				break;
			}
			// 갱신
			for (int i = 0; i < li.size();) {
				int rn = (int) (Math.random() * 2); // 0~1 사이의 난수 발생
				System.out.println("");
				System.out.print(rn+" ");
				if (rn % 2 == 0) { // 난수가 짝수이면(0이면) 삭제
					li.remove(i);
				} else { // 난수가 홀수이면(1이면) 나이(age)를 1증가
					li.get(i).age++;
					i++;
				}
			}

			Iterator<Star> it = li.iterator();
			while (it.hasNext()) {
				Star n = it.next();
				int rn = (int) (Math.random() * 2); // 0~1 사이의 난수 발생
				if (rn % 2 == 0) { // 난수가 짝수이면(0이면) 삭제
					it.remove();
				} else { // 난수가 홀수이면(1이면) 나이(age)를 1증가
					n.age++;
				}
			}

			// 생성
			for (int i = 0; i < 10; i++) { // 10개 생성
				li.add(new Star(10, 20));
			}

			while (li.size() < 10) {
				li.add(new Star(num++, 0));
				// num++;
			}
			System.out.println("");
			// 출력
			for (int i = 0; i < li.size(); i++) {
				System.out.printf("%2d  ", li.get(i).count);
			}
			System.out.println();

			for (int i = 0; i < li.size(); i++) {
				System.out.printf("%2d  ", li.get(i).age);
			}

		}
	}

}
