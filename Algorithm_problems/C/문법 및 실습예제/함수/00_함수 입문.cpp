#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// void : ����
// () ���̿��� void�� �����Ǿ��ִ�.
// �Լ��� ȣ��(call)�Ͽ��� ����ȴ�.
// �Լ� �ۼ� ���� ȣ���� ���� �ʾƵ� �ǰ� �ѹ� �̻� ȣ�� �� ���� �ִ�.
// �Լ��� ȣ�� �Ҷ� ()�� ������ ����.
void apple() {
	printf("ȣ����\n");
}

void main()
{
	srand((unsigned)time(NULL));

	apple(); // apple ȣ��

	//�Լ� ���� : �ڵ��� ��Ȱ��
	for (int i = 0; i < 10; i++) {
		printf("%d\n", rand() % 100);
	}
	apple();

	for (int i = 0; i < 5; i++) {
		apple();
	}
}