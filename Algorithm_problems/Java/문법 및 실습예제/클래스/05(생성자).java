import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��

class Tiger {
	
	// 1. Ŭ���� �̸��� ������ �Լ� �̸��� ���� �Լ��� �������Լ� ��� �Ѵ�.
	// 2. ������ �Լ��� �ݵ�� Ŭ���� �̸��� ���� �ؾ� �Ѵ�.
	// 3. ������ �Լ��� void Ű���带 ������ �ʴ´�.
	// 4. ������ �Լ��� ��ü�� ���� �� �� (new)�� �ڵ�ȣ�� �ȴ�
	// 5. ������ �Լ��� ���α׷��Ӱ� ���Ƿ� ȣ�� �� �� ����.
	// 6. ������ �Լ��� ��ü�� ������ �� �� �ѹ� call�ȴ�.
	// 7. ������ �Լ��� �Լ� �̹Ƿ� Overloding �Ҽ� �ִ�.
	// 8. ������ �Լ��� ��� ������ ���� �ʱ�ȭ�̴�.
	// 9. ������ �Լ���  �μ��� ���� �� �� �ִµ� �μ� ������ ���� �����ڸ� Default �����ڶ�� �Ѵ�
	Tiger(){
		System.out.println("ȣ����");
	}
}

public class Young {
	
	public static void main(String[] args) {
		
		System.out.println(1);
		Tiger t1 = new Tiger();
		System.out.println(2);
		Tiger t2 = new Tiger();
		System.out.println(3);
		Tiger t3 = new Tiger();
	}
}