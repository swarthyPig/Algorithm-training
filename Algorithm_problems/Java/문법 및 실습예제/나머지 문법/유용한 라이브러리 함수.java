vimport java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

public class Young {

	@SuppressWarnings("deprecation") // ������� �ʴ� ��ɰ� ���õ� ��� �����մϴ�.
	public static void main(String[] args) {

		// ex 1
		String s1 = String.format("%dȣ����%s�ڳ���%d", 10, "�ε鷹", 20);
		System.out.println(s1);

		// ex 2
		String name = new String("�̼���");
		int age = 20;
		String s2 = String.format("insert into table values(%s, %d)", name, age);
		System.out.println(s2);

		// ex 3
		// ���ڸ� ���ڿ��� �ٲ���
		int n1 = 1234;
		String s3 = Integer.toString(n1);
		System.out.println(s3);

		String s4 = n1 + ""; // ���� + ���ڿ� = ���ڿ� , �����Ƽ� �̷��� ó����
		System.out.println(s4);

		// ���ڿ��� ���ڷ� �ٲ� ��
		String s5 = "5678";
		int n2 = Integer.parseInt(s4);
		System.out.println(s5);

		// ex 4
		System.out.println(Math.abs(5));
		System.out.println(Math.abs(-5));
		System.out.println(Math.abs(-3.14));
		System.out.println(Math.min(10, 20));
		System.out.println(Math.max(20, 10));
		System.out.println(Math.ceil(3.45)); // �ݿø��ؼ� ���� ����� ���� ���
		System.out.println(Math.floor(-5.14));
		System.out.println(Math.round(500.145));
		System.out.println((int) (Math.random() * 10) + 1);

		// ex 5
		Date date = new Date(); // ���� ����
		System.out.println(date.getYear());
		System.out.println(date.getMonth());
		System.out.println(date.getDate());
		
		Calendar calendar = Calendar.getInstance(); // singleton ����
		System.out.println(calendar.get(Calendar.YEAR));
		System.out.println(calendar.get(Calendar.MONTH) + 1); // 1������ �����ϱ⶧���� +1
		System.out.println(calendar.get(Calendar.DATE));
		System.out.println(calendar.get(Calendar.DAY_OF_WEEK)); // �Ͽ����� 1�� ��
		System.out.println(calendar.get(Calendar.HOUR));
		System.out.println(calendar.get(Calendar.MINUTE));
		System.out.println(calendar.get(Calendar.SECOND));

		switch (calendar.get(Calendar.DAY_OF_WEEK)) {
		case Calendar.SUNDAY: // ���� case�ڿ��� ������ ����, Ķ������ static������ ���ȭ���Ǿ ������
			System.out.println("�Ͽ���");
			break;
		case Calendar.MONDAY:
			System.out.println("������");
			break;
		case Calendar.TUESDAY:
			System.out.println("ȭ����");
			break;
		case Calendar.WEDNESDAY:
			System.out.println("������");
			break;
		case Calendar.THURSDAY:
			System.out.println("�����");
			break;
		case Calendar.FRIDAY:
			System.out.println("�ݿ���");
			break;
		case Calendar.SATURDAY:
			System.out.println("�����");
			break;
		}
	}
}
