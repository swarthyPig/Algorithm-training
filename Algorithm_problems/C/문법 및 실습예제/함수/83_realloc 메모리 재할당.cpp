#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

void func83() {
	int *p1 = (int*)malloc(sizeof(int) * 5);
	// 5��10���� �ٲٰ� ������
	// ���� : ���� ��Ű�� �ٽ� �޸� �޴´�
	free(p1);
	p1 = (int*)malloc(sizeof(int) * 10);


	// �޸𸮸� ���Ҵ� ���ִ� �Լ� 
	realloc(p1, sizeof(int) * 3);
	free(p1);

	//new ���, new�� realloc�� ��ü�Ǵ°� ����
	int *p2 = new int[5];
	delete[]p2;
	p2 = new int[10];
	delete[]p2;
	p2 = new int[3];
	delete[]p2;
}

void main()
{
	srand((unsigned)time(NULL));


}