import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

interface B {

}

/*
 * interface G implements B{ // interface�� Ŭ������ �θ�� ���� �� ����.
 * 
 * }
 */

interface F extends B { // �������̽� Ŭ����

}

class A {

}

class C extends A { // Ŭ���� Ŭ����

}

class D implements B { // Ŭ���� �������̽�

}

//C (x) C
//C (im) I
//I (x) C
//I (ex) I

public class Young {

	public static void main(String[] args) {

	}
}
