#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func64(int **p) {
	// p�� �޸� �޴´�.

	//int (*p)[3]; // ���α��̸� �� �� ���
}

void main()
{
	srand((unsigned)time(NULL));

	int *pp;
	func64(&pp);
}