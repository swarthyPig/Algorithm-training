#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func57(const char *p) {
	char ar[] = "apple"; // ar�� ����� ��. ���� ���� �� ����.
	ar[0] = 'A';
	const char *br = "banana"; // ������ ���,�� ���źҰ�
	//br[0] = 'B'; // ���źҰ�
}

void main()
{
	srand((unsigned)time(NULL));

	func57("apple");
}