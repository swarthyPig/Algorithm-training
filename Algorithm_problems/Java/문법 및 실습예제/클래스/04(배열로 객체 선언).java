import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��

class Tiger {
	int a,b;
}

public class Young {
	
	public static void main(String[] args) {

		Tiger t1 = new Tiger(); // new �̸�() ��ü���� ��
		Tiger[] t2 = new Tiger[3]; // t2 ��ü�� ����� �� ���� �ƴ�, �̸��� �迭�� 3�� ����������̴�.
		Tiger t3,t4,t5; //���� �ڵ�� ���� �ڵ�.
		System.out.println(t2[0]);
		System.out.println(t2[1]);
		System.out.println(t2[2]);
		
		for (int i = 0; i < t2.length; i++) {
			t2[i] = new Tiger();
		} 
		
		for (int i = 0; i < t2.length; i++) {
			System.out.println(t2[i]);
		}System.out.println();
		
		Tiger[] t6 = {new Tiger(), new Tiger(), new Tiger()};  // t6 ���� 3�� ����
		
		t6[0] = t6[1];
		t6[2] = t6[1]; // 0�� 2�� ����� �� ��ü 5�� ���� 
	}
}