#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �Ҵ� �� �ּҹް� ��������
// �Լ� �̸��տ� *�� �پ������� �ּҸ� �������شٴ� ��
// void* �� ������ �ִٴ� ��
int *func30() { // �ּҰ� ���ϵǴ� �Լ�����

	int *a = new int;

	*a = 99;
	return a;
}


void main()
{
	srand((unsigned)time(NULL));

	func30();// ȣ�⸸ �ϸ� �Լ��� ���� �޸� ���� �߻�.
	int *n30 = func30();
	delete n30; // func30()���� �Ҵ���� �޸� ����

	printf("%d\n", func30());// �ּҰ� ��µ�
	printf("%d\n", *func30());// ��(����)�� ��µ�
	delete func30(); //�޸� ���� ��.
}