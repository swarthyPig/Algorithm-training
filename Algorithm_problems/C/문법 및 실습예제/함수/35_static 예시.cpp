#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func35_1() {
	int a = 10;
	a++;
	printf("%d\n", a);
}

void func35_2() {
	static int a = 10; //������ �� �� �Լ� ���� �ø���. ��, ���������� ó���Ѵ�. 
		        // �ٸ� �Լ������� ������� ���ϰ� �ϸ鼭 ���������� ������ �������� ����Ѵ�.
	a++;
	printf("%d\n", a);
}


void main()
{
	srand((unsigned)time(NULL));

	func35_1();
	func35_1();
	func35_1();
	func35_2();
	func35_2();
	func35_2();
}