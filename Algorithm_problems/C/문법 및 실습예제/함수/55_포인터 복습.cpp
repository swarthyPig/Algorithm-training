#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func55() {
	int num = 7;
	int *pnum;

	pnum = &num; // ����
	printf("%d\n", pnum); // �ּ����

	short *n1;
	//n1 = &num; // short * = int �ּ�, ������ Ÿ���� �����ʴ�.

	int n2 = 10, n3 = 20;
	int *n4;

	n4 = &n2; // n2�� �ּҸ� ��������(10)
	*n4 = (*n4) + n3; // 10 + 20

	printf("%d\n", n2); // 30 , *n4�� ���� ��

	*n4 = 100;
	//*n4++; // *(n4++); �켱 ���� ������ Ʋ������
	(*n4)++;// �´¹���, ��������
	printf("%d\n", n2); // 101 , *n4�� ���� ��

	int *n5 = 0;
	int *n6 = NULL; // �Ѵ� �ּҰ� ���ٴ�ǥ��, NULL�� �ִ� ���� ����

	// int *n7;
	// *n7 = 200; // �ּҹޱ����� ��� x
}

void main()
{
	srand((unsigned)time(NULL));

	func55();
}