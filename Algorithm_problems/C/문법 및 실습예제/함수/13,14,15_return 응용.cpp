#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// return ���� ������ �Լ��� �ݵ�� ������ �帧�� ������ ������ �Ѵ�.
int func13() {
	if (3 < 2) {
		return 100;
	}
	else {
		return printf("ȣ����\n");
	}
}

// return�� �Լ��� �ߴܽ�Ų��.
int func14() {
	printf("ȣ����\n");
	return 100;
	printf("�ڳ���\n"); // ��ġ���ڵ� unreach

}

// return Ÿ���� void �϶��� return Ű���带 ��� �� �� �ִ�.
// ��, ���� ���� �� ���� ������ �Լ��� �ߴ� ��Ű�� ������ �Ѵ�.
void func15() {
	int a = 3, b = 2;
	if (a > b) {
		printf("ȣ����\n");
		return;
	}
	else {
		printf("�ڳ���\n");
	}
	printf("�޹���\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func13();
	func14();
	func15();
}