#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u


// strcpy ������ ����
void func71() {
	// memcpy : �޸� ����
	// strcpy : String ����
	// strncpy(�޴³�, �ִ³�, ����) : ������ ũ�⸦ ���� ������, �߰��� n  
	// �ű� �迭�� ũ�⸦ ����ؼ� �־�ߵ�
	char ar[] = "apple";
	char br[10]; // �迭�� ũ�⸦ ������Ű�� ������ ����
	strcpy(br, ar); // ar�� ������ br�� ����

	printf("%s\n", br);

	char cr[] = "apple";
	char *dr = new char[strlen(cr) + 1]; // �޸� �� ���� 0����������� +1 ��
	dr[strlen(cr)] = 0;
	strcpy(dr, cr);

	printf("%s\n", dr);

	delete[]dr;

	// strncpy(dr,cr,3);
}

void main()
{
	srand((unsigned)time(NULL));

	func71();

}