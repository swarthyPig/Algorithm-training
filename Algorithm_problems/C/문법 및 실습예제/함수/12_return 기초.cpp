#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// return���� �ִ� �Լ��� �ݵ�� return �̶�� �ϴ� Ű���尡 �־�ߵȴ�
// �����ϴ� �μ��� n���� ���������� return ���� �ݵ�� �� ���� ��� �� �� �ִ�.
// int �Ӹ� �ƴ϶� ��� Ÿ���� ���� ��ų �� �ִ�.
// int a func12(){} �߸��� ���� a�� �����ߵ�
int func12() {

    return 100;
}

void main()
{
	srand((unsigned)time(NULL));

	// 1.return ������
	func12();
	// 2. ��������
	int n1 = func12();
	printf("%d\n", n1);
	// 3. ����ڵ� �ٷ� ���
	printf("d", func12());
}