#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// #define �Լ�ó�� ����ϱ�(��ũ�� �Լ�)
#define F85(a, b) ((a)+(b)) // Ÿ���� ����
void func85() {
	int num = F85(3, 4);
	printf("%d %d\n", num, F85(4, 5));
}

void main()
{
	srand((unsigned)time(NULL));

	func85();
}