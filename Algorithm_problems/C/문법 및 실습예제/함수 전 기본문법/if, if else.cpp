#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	printf("����");

	if (1) { // 0�� �ƴϹǷ� ��
		printf("ȣ����");
		printf("�ڳ���");
	}

	printf("��");

	
	printf("����");

	/*if (0) { // �����̹Ƿ� ���� �ȵ�
	printf("ȣ����");
	printf("�ڳ���");
	}

	printf("��");*/
	

	int input;
	scanf("%d", &input);

	if (input % 2 == 0) { // ¦��
	printf("�Է��� ���ڴ� ¦�� �Դϴ�.");
	}

	if (input % 2 == 1) { // Ȧ��
	printf("�Է��� ���ڴ� Ȧ�� �Դϴ�.");
	}

	int input1;
	scanf("%d", &input1);

	if (input1 % 4 == 0) { // 4�� ���
		printf("�Է��� ���ڴ� ¦�� �Դϴ�.");
	}
	else { // !4�ǹ��
		printf("�Է��� ���ڴ� Ȧ�� �Դϴ�.");
	}

	int input2;
	scanf("%d", &input2);

	if (input2 >= 90) {
		printf("A\n");
	}
	else if (input2 >= 80) {
		printf("B\n");
	}
	else if (input2 >= 70) {
		printf("C\n");
	}
	else {
		printf("F\n");
	}



	if (3 < 2); { // �����ݷ��� �߸� �ٿ����� �Ͼ �� �ִ� ��Ȳ
		  // 3<2 �� �����̶� ���� ��¹��� ��µ����ʾƾ� ������ �����ݷ��� �߸� �ٿ��� ������ ��µ�
		printf("ȣ����\n");
	}
	if (3 < 2) {
	};
	{ // �����ݷ��� �߸� �ٿ����� �Ͼ �� �ִ� ��Ȳ
		printf("ȣ����\n");
	}


	//�� 4������ ��� ���� ����
	if (true) {
		printf("ȣ����");
	}
	if (true) {
		printf("ȣ����");
	};

	if (true)
		printf("ȣ����");

	if (true) printf("ȣ����");
}v