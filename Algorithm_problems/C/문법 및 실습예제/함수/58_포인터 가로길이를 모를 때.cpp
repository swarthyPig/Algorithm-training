#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func58() { // ���α��̸� �𸦶� 
	int *p[3]; // ���α���
	p[0] = new int[10];
	p[1] = new int[10];
	p[2] = new int[10];
	// �� �ڵ� ���� ���� �ᱹ int p[3][10];�� ��������
}

void main()
{
	srand((unsigned)time(NULL));

}