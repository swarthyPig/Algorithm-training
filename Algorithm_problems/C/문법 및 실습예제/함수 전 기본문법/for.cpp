
	#include "stdafx.h"
	#pragma warning(disable:4996)
	#define _CRT_SECURE_NO_WARNINGS


	void main()
	{
	// for(�ʱ�, ����, ����)
	for (int a = 0; a < 10; a++) { // a�� 0���� 9���� �����ϸ鼭 ���

		printf("ȣ����%d\n", a);
	}

	for (int a = 1; a <= 10; a++) { // a�� 1���� 10���� �����ϸ鼭 ���

		printf("����%d\n", a);
	}

	for (int a = -2; a <= 2; a++) { // a�� -2���� 2���� �����ϸ鼭 ���

		printf("����%d\n", a);
	}

	int input;
	scanf_s("%d", &input); // �ܼ��� �Է��ϸ� �������� �����

	for (int a = 0; a < 10; a++) {

		printf("%d*%d=%d\n", input, a, input*a);
	}

	}

--------------------------------------------------------------------------------------------------------------

	
	#include "stdafx.h"
	#pragma warning(disable:4996)
	#define _CRT_SECURE_NO_WARNINGS


	void main()
	{
	int s = 0;

	for (int a = 1; a <= 10; a++) { // a�� 1���� 10���ϱ��� 1�� ������Ű�鼭 s���ٰ� ����

		//s = s + a;
		s += a;

		printf("%d\n", s);// ��������� ������� ��
	}
	//a++; 

	s++; // �̷������� 1������ų �� ����
	printf("%d\n", s);
	printf("-----------------------------------\n");

	{ //���������� ��ȣ�ȿ� �־ ��� ��ȣ�� ����� �޸𸮰� ��ȯ��
		int b = 10;
		printf("%d\n", b);
	} // ��������
	  //b++

	{
		int b = 30; // �޸� ��ȯ�� �� ���Ŀ� �����̸� ���� ����
	}

	for (int a = 0; a < 10; a++) { // for ���� ����Ͽ� apple�� 10�� ���
		printf("apple\n");
	}
	int c = 3; // d�����Ͽ� ��������� ��������
	{ // ��ȣ ���� ��������
		int d = 4;
		printf("%d%d\n", c, d);
	}
	printf("%d%d\n", c); // ��ȣ �ۿ� �����Ƿ� ��ȣ�� ������ ������ �޸𸮰� ��ȿ��

	int e = 3;
	{ // ���������� ���������� �̸��� ������ ��ȣ�� ȿ��
		int e = 4;
		printf("%d\n", e);
	}
	printf("%d\n", e);

	}
