vimport java.util.*;

// 실행시키는 단축키 : ctrl + f11
// 글꼴 크기 변경 : ctrl + (+, -)
// 글자정렬 : ctrl + a -> ctrl + i
// 문장 복사 : ctrl + alt + 방향키
// 문장 위아래 이동 : alt + 방향키
// 전체주석 : ctrl + shift + /
// 전체주석풀기 : ctrl + shift + 달러표시
//int input = (new Scanner(System.in)).nextInt();

public class Young {

	@SuppressWarnings("deprecation") // 권장되지 않는 기능과 관련된 경고를 억제합니다.
	public static void main(String[] args) {

		// ex 1
		String s1 = String.format("%d호랑이%s코끼리%d", 10, "민들레", 20);
		System.out.println(s1);

		// ex 2
		String name = new String("이순신");
		int age = 20;
		String s2 = String.format("insert into table values(%s, %d)", name, age);
		System.out.println(s2);

		// ex 3
		// 숫자를 문자열로 바꾸자
		int n1 = 1234;
		String s3 = Integer.toString(n1);
		System.out.println(s3);

		String s4 = n1 + ""; // 숫자 + 문자열 = 문자열 , 귀찮아서 이렇게 처리함
		System.out.println(s4);

		// 문자열을 숫자로 바꿀 때
		String s5 = "5678";
		int n2 = Integer.parseInt(s4);
		System.out.println(s5);

		// ex 4
		System.out.println(Math.abs(5));
		System.out.println(Math.abs(-5));
		System.out.println(Math.abs(-3.14));
		System.out.println(Math.min(10, 20));
		System.out.println(Math.max(20, 10));
		System.out.println(Math.ceil(3.45)); // 반올림해서 가장 가까운 정수 출력
		System.out.println(Math.floor(-5.14));
		System.out.println(Math.round(500.145));
		System.out.println((int) (Math.random() * 10) + 1);

		// ex 5
		Date date = new Date(); // 옛날 문법
		System.out.println(date.getYear());
		System.out.println(date.getMonth());
		System.out.println(date.getDate());
		
		Calendar calendar = Calendar.getInstance(); // singleton 패턴
		System.out.println(calendar.get(Calendar.YEAR));
		System.out.println(calendar.get(Calendar.MONTH) + 1); // 1월부터 시작하기때문에 +1
		System.out.println(calendar.get(Calendar.DATE));
		System.out.println(calendar.get(Calendar.DAY_OF_WEEK)); // 일요일을 1로 봄
		System.out.println(calendar.get(Calendar.HOUR));
		System.out.println(calendar.get(Calendar.MINUTE));
		System.out.println(calendar.get(Calendar.SECOND));

		switch (calendar.get(Calendar.DAY_OF_WEEK)) {
		case Calendar.SUNDAY: // 원래 case뒤에는 변수가 못옴, 캘린더는 static때문에 상수화가되어서 가능함
			System.out.println("일요일");
			break;
		case Calendar.MONDAY:
			System.out.println("월요일");
			break;
		case Calendar.TUESDAY:
			System.out.println("화요일");
			break;
		case Calendar.WEDNESDAY:
			System.out.println("수요일");
			break;
		case Calendar.THURSDAY:
			System.out.println("목요일");
			break;
		case Calendar.FRIDAY:
			System.out.println("금요일");
			break;
		case Calendar.SATURDAY:
			System.out.println("토요일");
			break;
		}
	}
}
