#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func67_0() {
	printf("�ڳ���67_1\n");
}

void func67_1() {
	printf("�޹���67_2\n");
}

void func67_2() {
	printf("ȣ����67_3\n");
}

void main()
{
	srand((unsigned)time(NULL));

	// �Լ� ������ Ȱ��
	for (int i = 0; i < 10; i++) {
		int rn = rand() % 3;

		switch (rn) {

		case 0:
			func67_0();
			break;

		case 1:
			func67_1();
			break;

		case 2:
			func67_2();
			break;
		}
	}

	printf("\n");
	// ���� �ڵ�� �ؿ� �ڵ�� ���� �ڵ���
	for (int i = 0; i < 10; i++) {
		int rn = rand() % 3;
		void(*ff[3])() = { func67_0,func67_1,func67_2 };// �Լ� �ּҸ� 3���޴� �迭�̴�, �Լ� ����Ʈ �迭
		ff[rn]();
	}
}