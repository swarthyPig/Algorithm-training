#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// *�� ���� ��ڼ� ���
void func07(int num) {
	printf("��ڼ� ��� ���α׷�\n");
	while (1) {

		printf("%d\n", num);
		if (num == 1) {
			printf("��ڼ��� ��� ��� �Ͽ����ϴ�.\n");
			break;
		}
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = 3 * num + 1;
		}
	}
	printf("\n");
}


void main()
{
	srand((unsigned)time(NULL));

	func07(39);
}