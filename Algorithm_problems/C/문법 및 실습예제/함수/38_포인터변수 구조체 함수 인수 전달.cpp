#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

struct STRU38 {
	int *num;
};
// �����ͺ��� ����ü �Լ� �μ� ���� ���
void func38(STRU38 x, STRU38 *y) {
	printf("%d %d\n", x.num, *x.num);  // �Ϲݺ����� ���� ������ �ּ�, ��
	printf("%d %d\n", y->num, *y->num); // �����ͺ����� ���� ������ �ּ�, ��
	//delete x.num; // ���� �Ʒ��� ���� �޸� �ּ� ������.
	//delete y->num; // ������ �����ؼ� ����
}

void main()
{
	srand((unsigned)time(NULL));

	STRU38 st38;
	// *st38.num = 100; // �ּ� ���� ���̾���
	st38.num = new int; // �Ҵ�
	*st38.num = 100; // ���ֱ�
	func38(st38, &st38); // �����, �ּ� ����
	delete st38.num; // ����
}