#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

struct STRU39 {
	int a;
};
void func39(STRU39 *st) {
	for (int i = 0; i < 10; i++) {
		st[i].a = i * 10; // ���뿡 ���� �־���
	}
}

void main()
{
	srand((unsigned)time(NULL));

	// func39(new STRU39[10]); // ���� �Ҵ�
	STRU39 *st39; // Ǯ� �Ҵ�
	st39 = new STRU39[10];

	func39(st39); // �Լ����� ���� �־���

	for (int i = 0; i < 10; i++) { // ���
		printf("%d\n", st39[i].a);
	}
	delete[]st39; // 1���̻� ����
}