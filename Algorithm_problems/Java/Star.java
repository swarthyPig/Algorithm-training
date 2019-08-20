import java.util.*;

/*
첫번째 행 : 난수로 인해 제거된 인덱스의 개수만큼 마지막 숫자값 부터 count를 1씩 증가하여 LinkedList에 추가
두번째 행 : 살아남은 숫자의 나이를 증가시켜 살아남은 횟수를 표시

0   1   2   3   4   5   6   7   8   9  // count 10자리를 초기화
0   0   0   0   0   0   0   0   0   0  // age를 초기화

1   2   3   4   5   7   8  10  11  12  // 난수로 인해 0,6,9(3개)가 삭제되었음 마지막 숫자가 9이므로 10, 11, 12를 List의 끝에 추가
1   1   1   1   1   1   1   0   0   0  // 1,2,3,4,5,7,8 은 살아남았으므로 age를 1증가

1   3   4  11  12  13  14  15  16  17  // 난수로 인해 2,5,7,8,10(5개)이 삭제되었음 마지막 숫자가 12이므로 13,14,15,16,17를 List의 끝에 추가
2   2   2   1   1   0   0   0   0   0  // 한번더 살아남은 1,3,4는 원래 가지고 있던 age 1에서 한번더 살아남았으므로 1을 더 증가시켜 2가됨. 살아남은 11,12는 age를 1증가

1   4  11  12  14  18  19  20  21  22  
3   3   2   2   1   0   0   0   0   0  

1  11  18  19  20  22  23  24  25  26  
4   3   1   1   1   1   0   0   0   0  

11  18  24  27  28  29  30  31  32  33  
4   2   1   0   0   0   0   0   0   0 

11  18  27  33  34  35  36  37  38  39  
5   3   1   1   0   0   0   0   0   0  

18  34  37  38  40  41  42  43  44  45  
4   1   1   1   0   0   0   0   0   0  

18  41  42  43  44  46  47  48  49  50  
5   1   1   1   1   0   0   0   0   0 

... 계속해서 실행(999가 입력되면 실행 종료)
*/

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

		int su = 0;
		int n = 2;
		while (true) {
			int num = in.nextInt();
			if (num == 999) { // 999가 입력되면 실행 종료
				System.out.println("실행종료");
				break;
			}
			// Update & Delete
			Iterator<Star> it = li.iterator();
			while (it.hasNext()) {
				int rn = (int) (Math.random() * n); // 0~1사이의 난수를 발생
				Star st = it.next();
				if (rn % 2 == 0) { // 난수가 0이면 해당 인덱스 제거
					it.remove();
				} else { // 난수가 1이면 해당 인덱스 나이 1 증가
					st.age++;
				}
			}

			// Create
			while (li.size() < 10) { // 0~9까지 입력
				li.add(new Star(su++, 0));
			}

			// Read
			for (int i = 0; i < li.size(); i++) { // count 출력
				System.out.printf("%2d  ", li.get(i).count);
			}
			System.out.println();

			for (int i = 0; i < li.size(); i++) { // age 출력
				System.out.printf("%2d  ", li.get(i).age);
			}
		}
	}
}