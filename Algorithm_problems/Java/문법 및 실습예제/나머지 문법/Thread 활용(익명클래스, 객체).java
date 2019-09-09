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
				System.out.println("�͸� Ŭ���� call");
			}
		};
		t2.start();

		// Ex3
		new Thread() {
			@Override
			public void start() {
				System.out.println("�͸� ��ü call");
			}
		}.start();

		// Ex4
		Tiger t3 = new Tiger();
		t3.start(); // ��ü 1���� start�� �ѹ��� call�����ϴ�
		// t3.start();
	}
}
