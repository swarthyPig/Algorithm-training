#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func63() {
	int **p; // ��������� int p[3][4]�� �������� ��������
	p = new int *[3];

	for (int i = 0; i < 3; i++) {
		p[i] = new int[4];
	}
	for (int i = 0; i < 3; i++) {
		delete[]p[i];
	}
	delete[]p;
}

void main()
{
	srand((unsigned)time(NULL));

}