import java.util.*;

class Tiger {

	void start() {
		System.out.println("ȣ����");
		run();
		System.out.println("�ڳ���");
	}

	void run() {
		System.out.println("�Լ� 2�� call");
	}
}

public class Study {

	public static void main(String[] args) {

		Tiger ti = new Tiger();
		ti.start();
	}
}
