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

	int banana, orange; // �ʵ带 �����ϴ�

	Apple() {
		System.out.println("������ call");
	}

	Apple(int banana, int orange) { // �����ϰ� ������ġ�� ���콺 ���� source -> using Field
		this.banana = banana;
		this.orange = orange;
	}

}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple();
	}
}