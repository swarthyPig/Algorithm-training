#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func59() {
	const char *p[] = {
		"ȣ����",
		"�ڳ���",
		"�޹���"
	};
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func59();
}