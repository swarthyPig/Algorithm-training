#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func60(int *p, int s) { // �迭 ���
	for (int i = 0; i < s; i++) {
		printf("%d\n", p[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

	int ar[] = { 0, 1, 2 }; // �迭 ���� �� �ʱ�ȭ
	printf("%d %d\n", sizeof(ar), sizeof(int)); // �迭�� �޸� ũ��� Ÿ����ũ�� ���
	func60(&ar[0], sizeof(ar) / sizeof(int)); // �迭 0���� �ּ�, �迭�� ����
}