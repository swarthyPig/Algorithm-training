import java.util.*;

class Tiger {

	void func01() {
		System.out.println("부모함수 1");
	}
}

class Lion extends Tiger {

	@Override
	void func01() {
		System.out.println("자식함수 1번");
	}
}

interface Dog {
	void func02();
}

class Cat implements Dog {

	@Override
	public void func02() {

		System.out.println("cat 함수 2번");
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
				System.out.println("익명클래스 함수 call");
			}
		};
		ti.func01();

		// Ex03 함수의 인수로 코드를 전달 할 수 있음
		new Tiger() {
			@Override
			void func01() {
				System.out.println("익명객체 함수 call");
			}
		}.func01();

		// Ex04
		Cat ca = new Cat();
		ca.func02();

		// Ex05
		Dog dog = new Dog() {

			@Override
			public void func02() {
				System.out.println("익명 인터페이스 함수 call");
			}
		};
		dog.func02();

		// Ex06 함수의 인수로 코드를 전달 할 수 있음
		new Dog() {

			@Override
			public void func02() {
				System.out.println("익명 인터페이스 객체 함수 call");
			}

		}.func02();
	}
}
