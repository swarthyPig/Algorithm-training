#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func40() {
	printf("%c\n", 'B');
	printf("%d\n", 10);
	printf("%5d\n", 123);
	printf("%05d\n", 123);
	printf("%s\n", "ȣ����");
	printf("%+d\n", 123);
	printf("apple%04d.bmp\n", 120);
	printf("%f %f\n", 3.14, 3.14f); // f�� �������� double Ÿ��
}

void main()
{
	srand((unsigned)time(NULL));

	func40();
}