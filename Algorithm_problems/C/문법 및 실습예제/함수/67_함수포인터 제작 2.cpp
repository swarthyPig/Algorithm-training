#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

//�Լ������� ����
int *func67(char a, short *b, int c) {
	printf("�ڳ���67\n");
	return NULL;
}

void main()
{
	srand((unsigned)time(NULL));

	int *(*f001)(char, short *, int) = func67;
	//func67();
	f001(0, NULL, 0); // ������ ���� �κп��� NULL�� �־���
}