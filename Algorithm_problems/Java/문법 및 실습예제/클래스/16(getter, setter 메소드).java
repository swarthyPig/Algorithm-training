import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

class Apple {

	private int color, price; // private �ʵ� ����

	Apple() { // ������

		System.out.println("������ call");
	}

	// public�� �Ⱥٿ��ָ� ����Ʈ
	public int getColor() { // getter �޼ҵ�
		return color;
	}

	public void setColor(int color) { // setter �޼ҵ�
		this.color = color;
	} // ���������� �ʵ� ������ ����

	public int getPrice() { // getter �޼ҵ�
		return price;
	}

	public void setPrice(int price) { // setter �޼ҵ�
		this.price = price;
	}

	void showInfo() { // ���ο� �ִ� �ʵ尪�� �����ִ� �Լ�
		System.out.println(color + " " + price);
	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple();

		// ���� �������� setter �޼ҵ� �̿�
		a1.setColor(100);
		a1.setPrice(1000);

		// ���� ����Ҷ��� getter �޼ҵ� �̿�
		System.out.println(a1.getColor() + " " + a1.getPrice());

		a1.showInfo();
	}
}
