#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// 18�� ���� ��, �����͸� ����Ͽ� �޸𸮸� �����ϰ����� ���� ��ȯ �ȴ� call by address
// �����͸� �̿��� SWAP
void func19(int *a, int *b) {
	if (a == NULL || b == NULL) { //������� ���α׷�, �����ʹ� ������ߵȴ�.
		return;
	}
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void main()
{
	srand((unsigned)time(NULL));

	int n8 = 10, n9 = 20;
	printf("%d %d\n", n8, n9);

	func19(&n8, &n9);

	printf("%d %d\n", n8, n9);
}
