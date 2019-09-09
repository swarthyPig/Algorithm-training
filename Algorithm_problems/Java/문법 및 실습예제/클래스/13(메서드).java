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
	
	int a, b; // �ʵ带 �����ϴ�
	
	Apple(){
		System.out.println("������ call");
	}
	
	// ������ �ؿ��ٰ� ����
	void func1() {
		System.out.println("�Լ� 1�� call");
	}
	
	void func2(int n) {
		System.out.println(n);
	}
	
	int func3() {
		return 999;
	}
	
	int func4(int n) {
		return n * 10;
	}
	
	void func5() {
		// �ڹٿ��� ����Ʈ�� ���� �׷��� ������
		// const�� ����
		// static�� �ֱ�� �ѵ� �Լ� �ȿ����� ������
		// �ڹٿ����� ...������ ����
	}
	
	void func6(int n1, int n2) {
		System.out.println(n1 + " " + n2);
	}
	
	int func7(int n1, int n2) {
		return n1+n2;
	}
	
	void func8(int n, float f, boolean b, String s) {
		System.out.println(n);
		System.out.println(f);
		System.out.println(b);
		System.out.println(s);
	}
	
	void func9(Apple apple) {
		System.out.println(apple.a + " " + apple.b);
		System.out.println(apple);
	}
	
	void func10(Apple apple) {
		
		apple.a = 777;
		apple.b = 888;
	}
	
	Apple func11(Apple apple) {
		//return null; // ��� ���� ���� ��
		return apple;
	}
	
	Apple func12(Apple apple) {
		return apple;
	}
}

public class Young {

	public static void main(String[] args) {

		Apple a1 = new Apple();
		
		a1.func1();
		
		a1.func2(100);
		
		a1.func3(); // 1��° ��� ���߿� ������ ��
		
		int num = a1.func3();// 2��° ���
		System.out.println(num);
		
		System.out.println(a1.func3()); // 3��° ���
		
		System.out.println(a1.func4(50));
		
		a1.func6(12, 34);
		
		System.out.println(a1.func7(10, 20));
		
		a1.func8(100, 1.24f, true, "ȣ����");
		a1.func8(200, 3.14f, false, new String("�ڳ���"));
		
		Apple a2 = new Apple();
		a2.a = 100;
		a2.b = 200;
		
		System.out.println(a2);
		a1.func9(a2); // Apple apple = a2; ������ �Ͼ
		
		a1.func10(a2);
		System.out.println(a2.a + " " + a2.b);
		
		Apple a3 = new Apple();
		a3.a = 111;
		a3.b = 222;
		Apple a4 = a1.func11(a3);
		a1.func11(a3);
		System.out.println(a4.a+" "+a4.b);
		System.out.println(a3 + " " + a4);
		
		
		a1 = a1.func12(a1);
	}
}
