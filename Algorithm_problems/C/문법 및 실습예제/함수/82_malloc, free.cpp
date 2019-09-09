#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

void func82() {
	int *p1 = new int; // 같은 문법
	int *p2 = (int*)malloc(sizeof(int) * 1); // malloc 1개 받을 

	int *p3 = new int[10];// 같은 문법
	int *p4 = (int*)malloc(sizeof(int) * 10); // malloc 10개 받을 때

	delete p1;
	free(p2);
	delete[]p3;
	free(p4); // free는 메모리 개수 상관없음
}

void main()
{
	srand((unsigned)time(NULL));


}