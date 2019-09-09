import java.util.*;

class Tiger extends Thread {

	@Override
	public void run() {
		System.out.println("run call");
	}
}

public class Study {

	public static void main(String[] args) {

		// Ex1
		Tiger ti = new Tiger();
		ti.start();

		// Ex2
		Thread t2 = new Thread() {
			@Override
			public void start() {
				System.out.println("익명 클래스 call");
			}
		};
		t2.start();

		// Ex3
		new Thread() {
			@Override
			public void start() {
				System.out.println("익명 객체 call");
			}
		}.start();

		// Ex4
		Tiger t3 = new Tiger();
		t3.start(); // 객체 1개당 start는 한번만 call가능하다
		// t3.start();
	}
}
