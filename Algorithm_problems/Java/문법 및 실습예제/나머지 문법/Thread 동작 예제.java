import java.util.*;

class Tiger extends Thread {

	@Override
	public void run() {

		for (int i = 0; i < 100; i++) {
			System.out.println("호랑이" + i);
		}
	}
}

public class Study {

	public static void main(String[] args) {

		System.out.println("1");

		Tiger ti = new Tiger();
		ti.start(); // start는 반드시 run을 call 한다.
		System.out.println("2");

		for (int i = 0; i < 100; i++) {
			System.out.println("코끼리" + i);
		}
	}
}
