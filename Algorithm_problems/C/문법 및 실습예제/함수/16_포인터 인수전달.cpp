#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �μ� : (10, &n3, new int, new int[3]) ������ ���, ����, ���Կ��� �����޷� �Ҵ�
void func16(int a, int *b, int *c, int *d) {

	printf("%d\n", a); // ���޵Ǿ��� �μ� a�� ��
	printf("%d\n", *b); // �������� ������ b�� ����
	printf("%d\n", *c); // �Ҵ���� ������ c�� ��

	for (int i = 0; i<3; i++) {
		*(d + i) = i; // d[i] = i; �� ����
	}
	for (int i = 0; i<3; i++) {
		printf("%d\n", d[i]); // 0,1,2
	}printf("\n");

	delete c;
	delete[]d;
}

void main()
{
	srand((unsigned)time(NULL));

	int n3 = 20;
	func16(10, &n3, new int, new int[3]); // ���Կ���
	// int *b = &n3; // int *b;�� b = &n3; �� ������ ��
	// int *c = new int; 
	// int *d = new int[3];
}