import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class View {

	interface onClickListner {
		void onClick();
	}
}

class Button implements View.onClickListner {

	@Override
	public void onClick() {
		// TODO Auto-generated method stub
		System.out.println("�Լ� 1�� call");
	}

}

public class Young {

	public static void main(String[] args) {

		Button c = new Button();
		c.onClick();

		View.onClickListner ab = new View.onClickListner() {

			@Override
			public void onClick() {
				// TODO Auto-generated method stub
				System.out.println("��ø 1�� call");
			}
		};
		ab.onClick();
	}
}
