#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// scanf�� ���ڿ� �ޱ�
void func54() {
	char input[128] = { 0, }; // �迭�� ũ�⸦ 2�� �¼��� �־��� 
	scanf("%s", &input);
	printf("%s\n", input);
}

void main()
{
	srand((unsigned)time(NULL));

	func54();
}