#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func45() {
	for (int i = 0; i < 10; i++) {
		if (i % 3 == 0) {
			printf("ȣ����\n");
			continue; // ������ ���� i++�� ����
		}
		printf("%d\n", i);
		if (i == 8) {
			printf("�ڳ���");
			break;
		}
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func45();
}