#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define __DEBUG__

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// ����� : f10
// ����� ���� : shift + f5
// �ϴ� �����ϰ� �� ���� ����� : ctrl + f10
// break point : f5
// �� ��� ���� : f11

void func01() {
	printf("�޹���1\n");
	printf("�޹���2\n");
	printf("�޹���3\n");
	printf("�޹���4\n");
}

void main() {
	srand((unsigned)time(NULL));

	/*int ar[10] = { 0, }; // �迭�� 0���� ä��
	int *pp = new int[10];// ������ ������ ����Ŀ��� ������ ��������� ��������

	func01();
	printf("ȣ����\n");
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
		sum = +i;
		printf("%d\n", sum);
	}

	func01();
	printf("�ڳ���\n");

	BITMAPFILEHEADER bf = { 0, };
	bf.bfType = 999;
	printf("����");
	delete[]pp;*/

	//-------------------------------------------------------------------------------------------

	/*int a = 10;
	int b = 20;
	printf("%d\n", a);
	int *ar = NULL;
	//ar[0] = 100; // NULL �� �迭�� ���� �����Ƿ� ����
	printf("%d\n", b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	if (3 < 2); { // if���ڿ� ;�� �����Ƿ� �߰�ȣ�ʹ� ������ ����
		printf("ȣ����\n");
	}
	printf("�ڳ���\n");*/

	//-------------------------------------------------------------------------------------------

	// ���Ǻ� ������
	// ��ó���� �κп� #define __DEBUG__ <--�� ����� �־�� �۵���
	BITMAPFILEHEADER bf = { 0, };
#ifdef __DEBUG__
	printf("%d\n", bf.bfOffBits);
	printf("%d\n", bf.bfReserved1);
	printf("%d\n", bf.bfReserved2);
	printf("%d\n", bf.bfSize);
	printf("%d\n", bf.bfType);
#endif // __DEBUG__

	printf("ȣ����\n");
}