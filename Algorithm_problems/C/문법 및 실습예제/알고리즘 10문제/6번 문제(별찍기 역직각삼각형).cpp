#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void ex06() {
	printf("[6�� ����]\n");
	/*
	  * * * * *
	  * * * *
	  * * *
	  * *
	  *
	*/
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			printf("* ");
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	ex06();
}