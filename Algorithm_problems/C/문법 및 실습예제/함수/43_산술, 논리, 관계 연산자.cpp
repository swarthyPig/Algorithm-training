#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func43() {
	// >, <, >=, <=, ==, != �񱳿���, ���迬�� 
	// && �� and ����, || �� or ����, ! �� ����
	// �������-> ������-> ���迬�� ������ �Ͼ
	if (3 + 2>6 && 7 * 3<6) { // +,* -> <,> -> && ����
	}

	int input;
	scanf_s("%d", &input);
	int in1, in2;
	scanf_s("%d %d", &in1, &in2);
}

void main()
{
	srand((unsigned)time(NULL));

}