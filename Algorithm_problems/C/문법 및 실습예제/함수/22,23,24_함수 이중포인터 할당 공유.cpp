#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func22(int num, int **p) {
	*p = new int[num];
}

void func23(int num, int **p) {
	*p = new int[num];
	for (int i = 0; i < num; i++) {
		(*p)[i] = 0;
	}
}

void func24(int a, int *b, int **c) {
	// ���� �Ǹ��� ����� �ִ�.
}

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

	int *apple;
	func22(3, &apple); //apple�� �ּҹޱ����̶� ���Ұ�, ������ &apple�� ó������ �ּҰ� �޾�������.
	// int *p = apple;
	// int **p = &apple;
	apple[0] = 10;
	apple[1] = 20;
	apple[2] = 30;

	// 2���� �����͸� �Լ����� ��� �� �� �뵵
	// �Լ����� �޸𸮸� �䱸�Ҷ�
	// ���� ������ ���̸� �𸦶�
	for (int i = 0; i < 3; i++) {
		printf("%d\n", apple[i]);
	}

	delete[]apple;

	// ����Ʈ ������ &�� ����Ͽ� �μ������� �� ���� 100% ��������Ʈ�� �޴´�.
	int *n14, *n15, *n16;
	func23(10, &n14); // 10�� ¥�� �迭 ������ 0�� ����

	func23(7, &n15); // 7�� ¥�� �迭 ������ 0�� ����

	func23(15, &n16); // 15�� ¥�� �迭 ������ 0�� ����

	int *n17;
	func24(3, new int, &n17); //ǥ���Լ� ���

	int n18 = printf("ȣ����\n"); //printf�� �Լ��̴� ""���� ������ ������.
	int n19 = printf("%d\n", n18);
	printf("%d\n", n19);
}