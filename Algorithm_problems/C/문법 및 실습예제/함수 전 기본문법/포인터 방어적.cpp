

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	int *a; // 2�ٷ� �Ҵ� �޴� ���
	a = new int; // �Ҵ��� �ּҰ� ����
	delete a; // �޸� ��ȯ

	int *b = new int; // ���ٷ� �Ҵ� �޴� ���
	delete b; // �޸� ����

	int *c = NULL; // �ּҸ� �ʱ�ȭ ��Ŵ
	c = new int[5]; // �Ҵ�
	delete[]c; // ����

	int *d = NULL; // �ּҸ� �ʱ�ȭ ��Ŵ

	// ������ �߻��� ������ ��� �ϸ鼭 ���α׷��� ��
	if (d == NULL) { // �ʱ�ȭ�� �Ǿ����� �Ҵ�
		d = new int;
	}
	if (d != NULL) { // ���� ������ ���� �ʾ����� ����
		delete d;
	}

	int *e;
	int ct = 0;
	int input;
	int input2;
	scanf("%d %d", &input, &input2);
	while (1) {
		if (ct == input2) {
			break;
		}
		ct++;

		e = new int[10]; // ������ e�� �޸� �Ҵ�

		for (int i = 0; i < input; i++) {

			e[i] = rand() % 100; // �Ҵ�� ��ŭ �迭�� ���� �Է�
		}
		for (int i = 0; i < input; i++) {
			printf("%d ", e[i]); // ���� ���
		}printf("\n");

		delete[]e; // 1���̻� �޸� ����
	}

	int *f = new int;
	delete f; // delete f�� �ι� ���� �ȵȴ�.
}