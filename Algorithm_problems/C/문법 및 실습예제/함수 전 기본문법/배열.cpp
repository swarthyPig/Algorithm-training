#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	int a = 10; // ������ ���� a�� �ʱⰪ 10�� ����
	int b[5]; // 4����Ʈ �޸� 5��
	//int c, d, e, f, g;
	//int h1, h2, h3, h4, h5;
	//int k0, k1, k2, k3, k4;
	b[0] = 10;
	b[1] = 20;
	b[3] = 30;
	//b[5] = 40; //��������
	printf("%d\n", b[0]); // 10
	printf("%d\n", b[1]); // 20
	printf("%d\n", b[2]); // �ּҰ� ���
	printf("%d\n", b[3]); // 30
	printf("%d\n", b[4]); // �ּҰ� ���

	//int ar[5];
	int br[5] = { 10, 20, 30, 40, 50 };
	printf("%d\n", br[0]); // 10
	printf("%d\n", br[1]); // 20
	printf("%d\n", br[2]); // 30 
	printf("%d\n", br[3]); // 40
	printf("%d\n", br[4]); // 50

	for (int a = 0; a < 5; a++) { // for������ �迭 �ε��� 0~5������ �迭 ���
		printf("%d ", br[a]); 
	}printf("\n");

	int cr[5] = { 0, }; // �迭�� �ڵ� 0���� �ʱ�ȭ // 0,�� ,�� �ִ°��� ǥ���� 
	for (int a = 0; a < 5; a++) {
		printf("%d ", cr[a]);
	}printf("\n");

	int dr[] = { 1, 2, 3, 4, 5 }; // ���� ���� �༭ �迭 �ʱ�ȭ

	dr[0] = 10 * 3;// 30
	dr[1] = dr[0] * 2; // 60
	dr[2] = dr[0] * dr[1]; // 1800
	dr[2 * 3 - 2] = 100; // �迭 �ε����� ��갪�� �� �� ���� 100
	dr[3] = dr[dr[4] - 99]; // dr[1] ���� ��� 60

	for (int a = 0; a < 5; a++) { // �迭�� ���� ���
		printf("%d ", dr[a]);
	}printf("\n");

	int er[] = { 54, 45, 96, 36, 15, 25, 48, 58, 28, 94 };

	for (int a = 0; a < 5; a++) { // �迭�� �� ���� ���Ѱ��� ���
		printf("%d ", er[a] + er[9 - a]);
	}printf("\n");

	for (int a = 0; a < 10; a++) {
		printf("%d ", er[a] / 10 + er[a] % 10); // �� �迭�� ��� �������� ���� ���� ���
	}printf("\n");

	for (int a = 0; a < 9; a++) { // ���迭�� ù��° �ι�°�� �� �ι�° ����°�� ��...�� ���ؼ� ���
		printf("%d ", er[a] + er[a + 1]);
	}printf("\n");

	int fr[5];
	printf("%d ", sizeof(fr)); //�迭���� Ȯ���� �޸� ũ�⸦ �˷���
	printf("\n");
	printf("%d ", sizeof(int));
	printf("\n");
	printf("%d ", sizeof(fr) / sizeof(int)); // �迭�� ���� 
	printf("\n");

	short gr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("%d\n", sizeof(gr) / sizeof(short));
	for (int a = 0; a < sizeof(gr) / sizeof(short); a++) { // �迭�� ������ ī��Ʈ���ص���
		printf("%d ", gr[a]);
	}printf("\n");

	int hr[] = { 5, 9, 1, 3, 5 };
	int ir[] = { 9, 8, 5, 1, 3 };

	for (int a = 0; a < sizeof(hr) / sizeof(int); a++) {
		printf("%d ", hr[a] + ir[a]);
	}printf("\n");

	for (int a = 0; a < sizeof(hr) / sizeof(int); a++) {
		printf("%d ", hr[a] + ir[4 - a]);
	}printf("\n");
}