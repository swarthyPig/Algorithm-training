#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

struct STRU36 {
	int a, b;
};
// ����ü & �Լ�
void func36() {

	STRU36 st;
	st.a = 10;
	st.b = 20;
	printf("%d %d\n", st.a, st.b);
}

void main()
{
	srand((unsigned)time(NULL));

	func36();
}