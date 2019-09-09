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
	int a, b;
	
	private Apple() { // ��ü ���� ���ϰ���
		System.out.println("�θ� ������ call");
	}
	
	static void func01() { // static : ó������ ���������, �޸𸮰� ��ü������ ���ص� ó������ �����Ѵ�.
		System.out.println("�Լ� 1�� call");
	}
	
	static void func02() { 
		
	}
}

public class Young {

	public static void main(String[] args) {

		System.out.println((new Random()).nextInt(100));

		System.out.println((int)(Math.random()*100)); 
		
		System.out.println((Math.random()));  // Math Ŭ������ random �Լ��� static���� �Ǿ��ִ�.
		
		Apple.func01(); // static���� ������� �޼ҵ常 ����. Ŭ�����̸�.�޼ҵ��̸�
		Apple.func02();
		// static ������� :  new�� ����ϸ� �ӵ��� ���ϵǱ� ������ static �����.
		// static �޼ҵ��� ��ü�� �����ϴ°��� �������� ������ �տ� private�� ���δ�.
		// �����տ����� static�� �ٿ��� �����ִ�
		Apple.func01();
		Apple.func02();
	}
}
