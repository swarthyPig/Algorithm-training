#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func112() {
	FILE *wf = fopen("sample.txt", "wb");

	//fwrite("B", 1, 1, wf); // (����� ������ �޸��� ���� �ּ�, 1byte��, 1��, �������Ʈ)

	//fwrite("Banana", 1, 6, wf);

	/*const char *s = "Orange";
	fwrite(s, 1, 6, wf);*/

	/*const char *s = "����ȭ�����Ǿ����ϴ�.";
	//printf("%d", strlen(s));
	fwrite(s, 1, strlen(s), wf);*/

	/*for (int i = 0; i < 26; i++){
	char ch = 'A' + i;
	fwrite(&ch, 1, 1, wf);
	}*/

	/*printf("%d %x\n", 'A', 'A' ); // 41�� A������ 16������
	�� �ٲ��� �ڵ� ��ȣ�� 0x0D 0x0A�̴�.
	���� �ڵ� ��ȣ�� 0x09 �̴�.
	�����̽� �ڵ� ��ȣ�� 0x20.*/

	/*for (int i = 0; i < 3; i++){
	for (int j = 0; i < 4; i++){
	char ch = 'A';
	fwrite(&ch , 1, 1, wf);
	}
	char c1 = 0x00;
	char c2 = 0x0A;
	fwrite(&c1, 1, 1, wf);
	fwrite(&c2, 1, 1, wf);
	}*/

	/*short n1 = 0x12ab; // 2����Ʈ
	fwrite(&n1, 2, 1, wf);
	fwrite(&n1, sizeof(short), 1, wf); // �ַλ��*/

	/*long n1 = 0x12345678;
	fwrite(&n1, 2, 1, wf);
	fwrite(&n1, sizeof(long), 1, wf);*/

	/*int ar[10];
	for (int i = 0; i < 10; i++){
		ar[i] = i;
	}
	fwrite(ar, sizeof(int), 10, wf);*/

	/*char *p = new char[20];
	for (int i = 0; i < 20; i++){
		p[i] = i;
	}
	fwrite(p, sizeof(char), 20, wf);

	delete[]p;*/

	/*struct STRU {
	int a;
	int b;
	int c;
	};

	STRU st = {10, 20, 30};
	printf("%d %d %d\n", st.a, st.b, st.c);*/

	/*fwrite(&st.a, sizeof(int), 1, wf);
	fwrite(&st.b, sizeof(int), 1, wf);
	fwrite(&st.c, sizeof(int), 1, wf);*/
	//fwrite(&st, sizeof(STRU), 1, wf); // �� �� ���̶� ���� �ڵ�
	// �� ���� �� ���� ����ü �ȿ� ������ ������ ������� ���� �̷��� ���� ����.
	fclose(wf); // �� �ݾƾߵ�
}

void main()
{
	srand((unsigned)time(NULL));

	func112();
}