#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

//continue, break
void func44() {
	int input;

	while (1) {
		scanf("%s", &input);

		if (input == 9999) {
			printf("�ڳ���\n");
			break;
			printf("�޹���\n");
		}
		if (input < 0) {
			printf("������ �Է� �� �� �����ϴ�.\n");
			continue; //�ٽ� �ݺ������� �ö�
			printf("ȣ����\n");
		}

		if (input % 2 == 0) {
			printf("�Է��� ���ڴ� ¦�� �Դϴ�.\n");
		}
		else {
			printf("�Է��� ���ڴ� Ȧ�� �Դϴ�.\n");
		}
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func44();
}