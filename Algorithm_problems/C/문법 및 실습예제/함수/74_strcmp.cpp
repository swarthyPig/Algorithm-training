#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u


void func74() {
	char ar[] = "apple";
	char br[] = "apples";

	printf("%d\n", strcmp(ar, br)); // ������ 0�� ����, 0�� �ƴ� ���ڰ� ������ ���� ���� ��

	if (strcmp(ar, br) == 0) {
		printf("����\n");
	}
	else {
		printf("����x\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func74();

}