#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u


void func70() {
	char ar[10] = "apple";
	printf("%d\n", sizeof(ar)); // �迭�� ũ��
	printf("%d\n", strlen(ar)); // ���ڿ��� ����

	int size = strlen(ar);
	printf("%d\n", size);

	// size_t strlen( char const* _Str);

	const char *br = "banana";
	int size_1 = strlen(br);
	printf("%d\n", size_1);

	printf("%d %d\n", sizeof(ar), sizeof(br)); // sizeof(br)==������ 4������, ������ �ּҸ� �����ϴ� �޸� ũ�� ����
}

void main()
{
	srand((unsigned)time(NULL));

	func70();

}