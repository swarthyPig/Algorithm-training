#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

int b34 = 10; // ��������, ������ ����� ������
void func34_1() {
	int n34 = 10; // ��������
	{
		int a34 = 30;
	}// a34�� �޸𸮰� �������
	 // printf("%d", a34);// a34�� ���Ұ�
	n34 = 50; // n34�� ��밡��
	b34 = 20;
}// n34�� �޸𸮰� ������� �׷��� func34_2������ n34�� ����� �� ����.

void func34_2() {
	// n34 = 20; //���Ұ�
	b34 = 30;
	{
		int *a = new int; // ������ ������ ������ �޸� �����ȵ�, new�� delete�� ��������ߵ�.
						  // a = new int;
		delete a;
	}
	// *a = 100; //������ ���� �ȵ�
}


void main()
{
	srand((unsigned)time(NULL));

}