#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u


void func72() {
	char ar[] = "apple";
	int size = strlen(ar);
	for (int i = 0; i < size; i++) {
		printf("%c %d\n", ar[i], ar[i]);
	}printf("\n");

	//�޸� ������ �����ϰ� �����ִ� �Լ�
	memset(ar, 0, size);

	for (int i = 0; i < size; i++) {
		printf("%c %d\n", ar[i], ar[i]); // �����ϰ� ����� 0 ä���� �迭 ���
	}printf("\n");

	char *p = new char[1000000];
	memset(p, 0, 1000000);
	// ���
	delete[]p;
}

void main()
{
	srand((unsigned)time(NULL));

	func72();

}