#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func56() {
	int ar[] = { 0, 1, 2 };
	printf("%d\n", &ar[0]); // �迭 0�� �ּҺ��¹�

	printf("%d\n", *(ar + 1)); // ar[1] �̶� ����

	int *p1 = &ar[0];
	int *p2 = ar; // ���� �Ʒ��� ���� ����

	(*p1)++; //�������� 
	p2++; // �ּ� ����, �迭��ȣ 1�� 

	printf("%d %d\n", *p1, *p2);

	p2++; // �迭��ȣ 2��
	(*p2)++; // �迭��ȣ 2���� ������ �ϳ� ������Ŵ

	printf("%d %d\n", *p1, *p2);

	int br[3];
	br[2] = 10; // *(br+2)=10; �� ���� �ڵ�
}

void main()
{
	srand((unsigned)time(NULL));

	func56();
}