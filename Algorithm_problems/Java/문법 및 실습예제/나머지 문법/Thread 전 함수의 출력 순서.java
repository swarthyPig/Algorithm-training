import java.util.*;

class Tiger {

	void start() {
		System.out.println("È£¶ûÀÌ");
		run();
		System.out.println("ÄÚ³¢¸®");
	}

	void run() {
		System.out.println("ÇÔ¼ö 2¹ø call");
	}
}

public class Study {

	public static void main(String[] args) {

		Tiger ti = new Tiger();
		ti.start();
	}
}
