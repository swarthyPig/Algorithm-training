import java.util.*;

// �����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
//int input = (new Scanner(System.in)).nextInt();

interface Animal {

	Animal f1();

	Animal f2();

	Animal f3();
}

//is a, has a ����
public class Young {

	public static void main(String[] args) {

		// ü�̴� ����
				new Animal() { // ü�̴��� �Ϸ��� �Լ� ������ this�� ����ߵ�

					@Override
					public Animal f1() {
						// TODO Auto-generated method stub
						System.out.println("f1 call");
						return this;
					}

					@Override
					public Animal f2() {
						// TODO Auto-generated method stub
						System.out.println("f2 call");
						return this;
					}

					@Override
					public Animal f3() {
						// TODO Auto-generated method stub
						System.out.println("f3 call");
						return this;
					}
					
				}.f2().f1().f3();
	}
}
