#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u


// ...���� ���
void func69_1(...) { // �����ִ� �Լ� �μ��� ������ ������ ����
	printf("ȣ����69_1\n");
}
void func69_2(int a, int b, ...) { // ù��° �ι�° �μ��� �� ������ߵ�. �� �̿ܿ��� ���Ѿ���
	printf("ȣ����69_2\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func69_1();// �μ����� ���� ����
	func69_1(10);
	func69_1(10, 20, 30, 40);
	func69_1(10, 'A', "apple"); // Ÿ������ ����

	func69_2(10, 20, 30, 40);

}