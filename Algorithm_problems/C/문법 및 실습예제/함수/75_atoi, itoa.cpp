#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

//�μ��� ���ÿ� ���� �ִ� ���⿡����
//pascal : �μ��� ���ÿ� �����ϴ� ������ ���ʿ��� ���������� �Ѵ�.
//cdecl : �μ��� ���ÿ� �����ϴ� ������ �����ʿ��� �������� �Ѵ�.
//stdcall : �μ��� ���ÿ� �����ϴ� ������ �����ʿ��� �������� �Ѵ�.

//���ÿ� �μ��� pop�ϴ� ��ü�� ����
//pascal : ȣ���� ���ϴ� ���� ���ð����� �����Ѵ�.
//stdcall : ȣ���� ���ϴ� ���� ���ð����� �����Ѵ�.
//cdecl : ȣ���� �ϴ� ���� ���ð����� �����Ѵ�.

void _cdecl func75() { // ����Ʈ : _cdecl
	char ar[] = "1234"; // ���ڸ� ���
	int num = atoi(ar);// �ƽ�Ű(���ڿ�) to int(����)
	printf("%d\n", num);

	itoa(2018, ar, 10); // ������ ���ڿ���, (��ȯ�� ����, ���ڿ��� ���� ����, ��ȯ�� ����)
	printf("%s\n", ar);
}

void main()
{
	srand((unsigned)time(NULL));

	func75();

}