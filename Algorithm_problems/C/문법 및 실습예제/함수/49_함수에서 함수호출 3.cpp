#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// ���α׷� ����. Stack Overflow.
void func49_2();
void func49_1() { // ������ �ؿ����� ȣ��ȵ����� ���� �Լ������� �����־��� ������ ����
	func49_2();
	printf("ȣ����\n");
}
void func49_2() { // �ؿ��� ���� �Լ��� ȣ�� ����
	func49_1();
	printf("�ڳ���\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func49_2();

}