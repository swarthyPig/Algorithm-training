#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// ������ �̿��� SWAP, call by ����, �����Ͷ� �޸� ��������α׷��� �ʿ����
void func21(int &a, int &b) {
	// ������ ������� ���α׷��� © �ʿ䰡����, 
	int t;
	t = a;
	a = b;
	b = t;
}

// ��Ʈ���� ���� ���������� �ʱ�Ǿ�����.

void main()
{
	srand((unsigned)time(NULL));

	int *a;
	int **b;
	b = &a; //����
	a = new int; // �Ҵ� a, *b �� �� ����.
	*a = 99; // �� = 99;
	printf("%d\n", **b); // ��
	**b = 77; // �� = 77;
	printf("%d\n", *a); //��

	int *c;
	int **d;
	d = &c; // ����
	*d = new int; // �Ҵ� c, *d �� �� ����.
	**d = 66;
	printf("%d\n", *c);
	*c = 55;
	printf("%d\n", **d);

}