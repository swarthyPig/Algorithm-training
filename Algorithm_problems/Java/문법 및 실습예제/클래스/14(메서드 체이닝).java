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
	
	Apple(){
		System.out.println("������ call");
	}
	
	void func1() {
		System.out.println("1�� call");
	}
	
	void func2() {
		System.out.println("2�� call");
	}
	
	void func3() {
		System.out.println("3�� call");
	}
	
	Apple func4() {
		System.out.println("4�� call");
		return this;
	}
	
	Apple func5() {
		System.out.println("5�� call");
		return this;
	}
	
	Apple func6() {
		System.out.println("6�� call");
		return this;
	}
	
	// ü�̴� ��� ����
	Apple func7() {
		System.out.println("���");
		return this;
	}
	
	Apple func8() {
		System.out.println("�˸�");
		return this;
	}
	
	Apple func9() {
		System.out.println("������ ������ ���� �Ǿ����ϴ�.");
		return this;
	}
	
	Apple func10() {
		System.out.println("��Ʈ��ũ ���°� ���� �ʽ��ϴ�.");
		return this;
	}
	
	Apple func11() {
		System.out.println("���α׷��� �����մϴ�.");
		return this;
	}
	
	Apple func12() {
		System.out.println("��ø� ��ٷ� �ּ���.");
		return this;
	}
	
	Apple ���ϱ�(int n) {
		a = a + n;
		return this;
	}
	
	Apple ���ϱ�(int n) {
		a = a * n;
		return this;
	}
	
	Apple ����(int n) {
		a = a - n;
		return this;
	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple();
		
		a1.func1();
		
		System.out.println(a1);
		a1.func4();
		System.out.println(a1.func4());
		
	
		Apple a2 = a1.func4();
		System.out.println(a2);
		
		a1.func4().func1(); // ���Ǳ� �Ϻ������� this�� �Ѿ�����ϱ� this.��ü�� �����ִ�, .�ڿ� 1~4���Լ� ���� ��밡��
		
		// ü�̴�(return this�� �� �־�ߵ� ) ����� �����ؼ� ����Ҷ� ��
		a1.func4().func4().func4().func4();
		
		a1.func6().func5().func4().func5();
		
		a1.func6().func1();
		
		a1.func7().func10().func12(); // ��Ʈ�ΰ�ó�� ���̰� �ϱ�����
		
		a1.func7(); //�� ��Ʈ���� �𸣰� �߰��� �ڵ带 �߰��� �Ǽ� �����ϱ����� 
		System.out.println("�޹���");
		a1.func10();
		a1.func12();
		
		Apple a3 = new Apple();
		
		a3.a = 10;
		
		a3.���ϱ�(3).����(7).���ϱ�(15).���ϱ�(30);
		System.out.println(a3.a);
	}
}
