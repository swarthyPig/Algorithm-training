import java.util.*;

//�����Ű�� ����Ű : ctrl + f11
// �۲� ũ�� ���� : ctrl + (+, -)
// �������� : ctrl + a -> ctrl + i
// ���� ���� : ctrl + alt + ����Ű
// ���� ���Ʒ� �̵� : alt + ����Ű
// ��ü�ּ� : ctrl + shift + /
// ��ü�ּ�Ǯ�� : ctrl + shift + �޷�ǥ��
public class Young {

	public static void main(String[] args) {
		int[] ar;
		int[] br = {10, 20, 30};
		int[] cr = new int[5];

		for (int i = 0; i < 3; i++) {
			System.out.print(br[i]+" ");
		}System.out.println();

		System.out.println(br.length);
		for (int i = 0; i < br.length; i++) { // ArrayIndexOutOfBoundsException
			System.out.print(br[i]+" ");
		}System.out.println();

		for (int i : br) {
			System.out.print(i+" ");
		}System.out.println();

		for (int i = 0; i < cr.length; i++) {
			cr[i] = i * 10;
		}

		for (int i : cr) { // �Ǵٸ� �迭 ��� ���
			System.out.print(i + " ");
		}System.out.println();

		String[] dr = {"ȣ����", "�ڳ���", "�޹���"};
		System.out.println(dr); // �޸��ּ� : [Ljava.lang.String;@7b1d7fff

		for (int i = 0; i < dr.length; i++) {
			System.out.print(dr[i]+ " ");
		}System.out.println();

		for (String s : dr) {
			System.out.print(s + " ");
		}System.out.println();

		String[] er = new String[5];
		er[0] = "�ҳ���";
		er[1] = "�ε鷹";
		er[2] = "�볪��";

		for (String s : er) {
			System.out.print(s + " ");
		}System.out.println();
		//String[] fr = new String();//�̷��� ��� x, �迭����
		String s1 = new String(); // ��������
	}
}
