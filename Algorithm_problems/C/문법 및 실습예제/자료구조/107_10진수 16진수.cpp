#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func107() {
	printf("%d %d\n", 10, 0x10);// 10����
	printf("%d %d\n", 10, 0xab);
	printf("%d\n", 0xABCDEF);
	printf("%d\n", 0x3F + 1);
	printf("%x\n", 0x3F + 1); // 16����
	printf("%x\n", 0x99 + 1);
	printf("%x\n", 0x99 + 7);
	printf("%x\n", 0xFF + 1);
	printf("%d %d %x %x\n", 100, 0x100, 100, 0x100);
}

void main()
{
	srand((unsigned)time(NULL));
	
	func107();
}