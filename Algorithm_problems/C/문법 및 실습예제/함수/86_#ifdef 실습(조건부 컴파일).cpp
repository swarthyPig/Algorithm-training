#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// #ifdef �ǽ�(���Ǻ� ������)
void func86() {
#define TEST

#ifdef TEST
	printf("��Ʈ��ũ1\n");
#endif

	printf("��Ʈ��ũ2\n");

#ifdef TEST
	printf("��Ʈ��ũ3\n");
#endif 
}

void main()
{
	srand((unsigned)time(NULL));

	func86();

}