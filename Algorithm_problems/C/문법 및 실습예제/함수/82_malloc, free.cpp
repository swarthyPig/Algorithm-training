#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

void func82() {
	int *p1 = new int; // ���� ����
	int *p2 = (int*)malloc(sizeof(int) * 1); // malloc 1�� ���� 

	int *p3 = new int[10];// ���� ����
	int *p4 = (int*)malloc(sizeof(int) * 10); // malloc 10�� ���� ��

	delete p1;
	free(p2);
	delete[]p3;
	free(p4); // free�� �޸� ���� �������
}

void main()
{
	srand((unsigned)time(NULL));


}