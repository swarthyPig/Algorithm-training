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
void func66() {
	printf("ȣ����66\n");
}

void main()
{
	srand((unsigned)time(NULL));

	// �Լ� ������ ����
	void(*f000)() = func66;
	//func66();
	f000();
}