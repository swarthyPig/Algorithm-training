#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u


void func73() {
	char ar[] = "apple";
	char br[30] = "banana";
	// �� ���ڿ��� �ϳ��� ������
	// ������ �޸��� ������ ����ؾߵȴ�
	strcat(br, ar); // 2���� ���ؼ� br�� ����
  //strcat(ar,br); // 2���� ���ؼ� ar�� ����
	printf("%s %s\n", ar, br);

	char *cr = new char[strlen(ar) + strlen(br) + 1]; // ���� 0���� ������ 1�ڸ� Ȯ��
	memset(cr, 0, strlen(ar) + strlen(br) + 1);
	strcat(cr, ar);
	printf("%s\n", cr); //%s�� �����͸� ����Ҷ� �ּҸ� �������� ������ ����
	strcat(cr, br);
	printf("%s\n", cr);
}

void main()
{
	srand((unsigned)time(NULL));

	func73();

}