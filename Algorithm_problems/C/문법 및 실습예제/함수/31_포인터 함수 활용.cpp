#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �����͸� ����ؼ� �ּҸ� ���� �޾Ƽ� ���� ���
// ���ο��� �޸� �Ҵ�, call, delete ���� �ѹ��� ����
short *func31(short *a) {
	*a = 99;

	return a;
}


void main()
{
	srand((unsigned)time(NULL));

	short n31 = 10;
	short *p31;
	p31 = func31(&n31); // �Ϲݺ����� �ּҸ� ����, ���� x
	printf("%d %d\n", n31, *p31);
	

	short *t31;
	t31 = new short;
	t31 = func31(t31); // �����ͺ��� �Ҵ�, ���� ��
	printf("%d\n", *t31);
	delete t31;

	delete func31(new short);//�޸� �Ҵ�, call, ���� ���� �ѹ��� ��
}