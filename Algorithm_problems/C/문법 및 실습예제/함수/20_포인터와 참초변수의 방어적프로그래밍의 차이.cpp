#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �����Ϳ� ���������� ��������α׷��� ����
void func20(int *a, int &b) { //a�� �����ͺ��� b�� ��������
	if (a != NULL) { // ������ ������� ���α׷��� © �ʿ䰡����, 
		*a = 10; // �����Ͷ� NULL������ �����Ƿ� ����� ���α׷��� �ʿ��ϴ�
	}
	b = 20;
}

void main()
{
	srand((unsigned)time(NULL));

	int n10 = 10;
	int &n11 = n10; // ����(����) : �Ϲ� ���� �տ� &�� ���̴� �� 
	printf("%d %d\n", &n10, &n11); // ���� ���� �ּҵ� ����.
	// int &n12; 
	// 1. ���������� ����� ���ÿ� ������ ���� ������ �����Ͽ���
	// 2. ������ �� �ѹ��� ������ ���� �� �ִ�. 

	int n12 = 3, n13 = 4;
	func20(NULL, n13); // (������, ����) �����ʹ� NULL�� ������ ����
}