import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

final class Tiger{
	// final : ������, class��, method�տ� ���
	// ���� : ������ ���� ���⼭ ������, ���̻� ���� �Ұ�(���ȭ)
	// class : �� �̻� ��� �� �� ����
	// method : �� �̻� Override �Ұ�
	
	final int a = 10;
	static final double PI = 3.14;
	static final int b = 0;
	
	Tiger(){
		// b = 0;
	}
	
	static void func01() {
	
	}
	
}

/*class Lion extends Tiger{ // Tiger Ŭ������ final ������ �ƹ��͵� ����
	@Override
	void func01() {

	}
}*/

public class Young {

	public static void main(String[] args) {

		Tiger t1 = new Tiger();
	}
}
