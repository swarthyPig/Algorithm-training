#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func51(int num) {
	static int a = 0;
	a++;
	if (num < 0) {
		return;
	}
	num--;
	printf("ȣ���� ");
	printf("%d\n", a);
	func51(num);
}

void main()
{
	srand((unsigned)time(NULL));

	func51(3);
}