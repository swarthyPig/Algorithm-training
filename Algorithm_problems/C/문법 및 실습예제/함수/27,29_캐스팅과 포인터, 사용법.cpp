#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// ���Կ����� ������, ���� ĳ���� ������ ����
void func27() {
	int *a;
	//short *b;
	//int *c;
	int *c = new int;
	a = c; // ����� ������ �߻�, c�� �ּ� �ޱ� ����.
	short *b = new short;
	// a = b; //������ Ÿ���� �ٸ�. ���� �߻�.
	// ������ �׻� ������ Ÿ���� ���ƾ� �ȴ�.

	void *d; // �޴� Ÿ�Կ� ������ ����. ��� Ÿ�� ����.
			 //void e; // ���� �߻�, void�� �����ͺ����� ���� ����, �Ϲ� ������ �ȵ�.

	// ������ d�� void ���̹Ƿ� ���Ÿ���� �� ���� �� �ִ�.
	d = a;
	d = b;
	d = c;

	// a = d; // ���� ���� ����������, �� ���� �޴� ���� Ÿ�Կ� ������ߵ�
	a = (int*)d;// d�� intŸ���� �ּ� Ÿ�Ժ�ȯ
	b = (short*)d;
}

// ĳ���ð� ������ ����
void func29() {
	int *a = new int;
	*a = 10;
	printf("%d\n", *a);
	printf("%d\n", *(int*)a); // ���ǻ� ����
	printf("%d\n", (int)*(int*)a); // �Ϻ��� ����
	printf("%d\n", (int)*(short*)a); // ���������� ��븸������ 
}


void main()
{
	srand((unsigned)time(NULL));

	func27();
}