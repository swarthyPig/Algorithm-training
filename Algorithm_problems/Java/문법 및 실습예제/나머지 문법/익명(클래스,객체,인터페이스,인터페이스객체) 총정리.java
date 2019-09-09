import java.util.*;

class Tiger {

	void func01() {
		System.out.println("�θ��Լ� 1");
	}
}

class Lion extends Tiger {

	@Override
	void func01() {
		System.out.println("�ڽ��Լ� 1��");
	}
}

interface Dog {
	void func02();
}

class Cat implements Dog {

	@Override
	public void func02() {

		System.out.println("cat �Լ� 2��");
	}

}

public class Study {

	public static void main(String[] args) {

		// Ex01
		Lion li = new Lion();
		li.func01();

		// Ex02
		Tiger ti = new Tiger() {
			@Override
			void func01() {
				System.out.println("�͸�Ŭ���� �Լ� call");
			}
		};
		ti.func01();

		// Ex03 �Լ��� �μ��� �ڵ带 ���� �� �� ����
		new Tiger() {
			@Override
			void func01() {
				System.out.println("�͸�ü �Լ� call");
			}
		}.func01();

		// Ex04
		Cat ca = new Cat();
		ca.func02();

		// Ex05
		Dog dog = new Dog() {

			@Override
			public void func02() {
				System.out.println("�͸� �������̽� �Լ� call");
			}
		};
		dog.func02();

		// Ex06 �Լ��� �μ��� �ڵ带 ���� �� �� ����
		new Dog() {

			@Override
			public void func02() {
				System.out.println("�͸� �������̽� ��ü �Լ� call");
			}

		}.func02();
	}
}
