#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

struct STRU37 {
	int a, b;
};
// �Ϲݺ��� ����ü �Լ� �μ� ���� ���
void func37(STRU37 x, STRU37 *y) { // ���� �Ϲݺ����� �ް� �ּҴ� �����ͺ����� ����

	printf("%d %d\n", x.a, x.b); // �� ���
	printf("%d %d\n", &x.a, &x.b); // �ּ� ���
	printf("%d %d\n", y->a, y->b); // ������ ����
	printf("%d %d\n", &y->a, &y->b); // ������ �ּ�
}

void main()
{
	srand((unsigned)time(NULL));

	STRU37 st37; 
	st37.a = 10;
	st37.b = 20;

	func37(st37, &st37); // ��, �ּ�����
}