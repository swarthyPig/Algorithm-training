            #include "stdafx.h"

	void main()
	{
	printf("JYG\n"); // JYG ����ϰ� �ٹٲ�
	printf("ȣ\n��\n��\n"); // ȣ���� �� ���ڻ��̿� �ٹٲ�
	printf("���ۢ�\n"); // ���� ��� Ư������ ��� ����
	printf("ȣ%d��\n", 100); // ȣ�� �� ���̿� ���������ڸ� ���� 100 �ֱ�
	printf("��%d��%d��%d��\n", 10, 20, 30); //�� �� �α� ���̿� ���� �����ڸ� ���� 10 20 30 �ֱ�
	printf("%d%d%d\n", 10, 20, 30); // ���������ڸ����� 102030 ���
	printf("�ڳ���%05d\n", 123); // ���������ڸ� ���� 123�� ���ڸ��� 0���� ä��� 5�ڸ��� ���
	printf("�ڳ���%5d\n", 123); // ���������ڸ� ���� 123�� ���ڸ��� �������� ä��� 5�ڸ��� ���
	printf("%f\n", 3.14f); // �Ǽ��������� 3.14���
	printf("%c\n", 'B'); // �������
	printf("�����%s\n", "�⸰"); // ���������ڸ� ���� ����̴����� �⸰ ���
	printf("%d%f%c%s%05d", 10, 3.14, 'A', "�����", 20); // ���������� Ȱ��

	int apple; // ��������
	apple = 100; //������ 100�ֱ�
	printf("%d\n", apple); // 100�� ���ִ� ���� apple ���

	}

----------------------------------------------------------------------------------------------------------------------------------

             int a;
	int b;
	int c, d;
	//int a; �����̸��� �ߺ� ���Ұ�
	int a30;
	//int 3a; ù��° ���ڴ� ���� ���Ұ�
	//int apple!; ������ Ư������ ���Ұ�
	int apple_$;
	int _300;
	int ���; // ��� ���������� ������������
	int applenumber; //������������
	int apple_number; // ������
	int AppleNumber; //����(��Ÿǥ���)
	int ShowMeTheMoney;
	int orange = 100;
	int banana;
	banana = 100;
	int kiwi;
	//printf("%d%d%d", orange,banana, kiwi); //kiwi�� �ʱ�ȭ�� �ȵǼ� ��� �Ұ�



------------------------------------------------------------------------------------------------------------------------------

             #include "stdafx.h"

	void main()
	{
	char a = 100; //8bit = 1byte(-128 ~ 127)
	char b = -128;
	printf("%d\n%d\n", a, b);

	short c = 20000;
	short d = 30000;
	printf("%d\n%d\n", c, d);

	long e = 3000000000; //������ �Ѿ�� �׷��� -1294967296 �� ���
	long f = 2000000000;
	printf("%d\n%d\n", e, f);

	signed char g = 100; //������ ����ϰڴ�
	unsigned char h = 255; // ������ ��������ʰڴ�
	printf("%d\n%d\n", g, h);

	unsigned long i = 4000000000;
	printf("%lu\n", i);

	}

------------------------------------------------------------------------------------------------------------------------------
            #include "stdafx.h"


	void main()
	{
	printf("%d\n", 17 + 4);
	printf("%d\n", 17 - 4);
	printf("%d\n", 17 * 4);
	printf("%d\n", 17 / 4);
	printf("%d\n", 17 % 4);
	printf("\n");

	int n1 = 17, n2 = 4;

	printf("%d\n", n1 + n2);
	printf("%d\n", n1 - n2);
	printf("%d\n", n1 * n2);
	printf("%d\n", n1 / n2);
	printf("%d\n", n1 % n2);
	printf("\n");

	int a = 10;
	printf("%d\n", a);
	a++; // a��� �ϴ� �޸��� ������ 1������Ų��
	printf("%d\n", a);
	a--; // a��� �ϴ� �޸��� ������ 1���ҽ�Ų��
	printf("%d\n", a);
	printf("\n");

	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short)); // 2
	printf("%d\n", sizeof(int)); // 4
	printf("%d\n", sizeof(float)); // 4
	printf("%d\n", sizeof(double)); // 8
	printf("\n");

	printf("%d\n", 3 > 2);
	printf("%d\n", 3 < 2);
	printf("%d\n", 3 >= 2);
	printf("%d\n", 3 <= 2);
	printf("%d\n", 3 == 2);
	printf("%d\n", 3 != 2);
	printf("\n");

	int apple = 0;
	printf("%d\n", apple == 3);
	printf("%d\n", 100 > 90 + 11); //��� �����Ͼ�� ���谡 �����
	printf("%d\n", (100 > 90) + 11);
	printf("%d\n", 100 > (90 + 11));

	}