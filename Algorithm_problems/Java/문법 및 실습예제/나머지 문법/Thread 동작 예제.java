import java.util.*;

class Tiger extends Thread {

	@Override
	public void run() {

		for (int i = 0; i < 100; i++) {
			System.out.println("ȣ����" + i);
		}
	}
}

public class Study {

	public static void main(String[] args) {

		System.out.println("1");

		Tiger ti = new Tiger();
		ti.start(); // start�� �ݵ�� run�� call �Ѵ�.
		System.out.println("2");

		for (int i = 0; i < 100; i++) {
			System.out.println("�ڳ���" + i);
		}
	}
}
