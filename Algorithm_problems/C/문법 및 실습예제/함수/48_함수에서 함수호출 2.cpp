#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �Լ����� �Լ��� �θ� �� �ִ�.(�ؿ������� �������� �θ��°� ����)
void func48_2();
void func48_1() {
	printf("ȣ����\n");
	func48_2(); // ���� �Լ������� �ؿ� �Լ� ȣ�� �ȵ�.(��, �Լ� ������ ���� �����ָ� ����)
}

void func48_2() {
	printf("�ڳ���\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func48_1();

}