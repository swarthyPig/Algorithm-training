#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

// #define�� include ���� �ؿ� ����
// #define�� ���Ǵ� ���ڴ� �빮��
// c���� �����ϰ� �����ݷ��� ������ �ʴ´�.
// #define ���� �ڿ��� �ּ��� �����ʴ´�
// #define �� ����ϴ� ���� : �ڵ��� ���������� ����

// ������ �� APPLE�̶�� ���ڸ� ���� 3���� �ٲ۴�
// �����ݷ��� ���̸� (��;) ���� �ٲ� 
#define APPLE 5
//#define BANANA 3+5
#define BANANA (((3) * (5)) + (2))
#define ORANGE ((3)+(5))

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	int a = APPLE;
	printf("%d\n", a);

	for (int i = 0; i < APPLE; i++) {
		printf("ȣ����\n");
	}

	printf("%d\n", APPLE);
	printf("%d\n", BANANA);
	printf("%d\n", BANANA * BANANA);
	printf("%d\n", ORANGE);

	printf("%d\n", STARTDOC);
}