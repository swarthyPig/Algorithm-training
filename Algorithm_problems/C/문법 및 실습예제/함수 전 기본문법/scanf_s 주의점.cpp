#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	/*
	int input;

	printf("�ڳ���");
	scanf("%d", &input);

	���⼭ ���α׷��� �����.
	1. scanf �Է� ���� Ÿ���� int�� ����.
	2. ���������ڴ� %d���� �ٸ� ���� �ȵȴ�.
	3. �ݵ�� &�� �ٿ��ߵȴ�.
	input �̶�� ��� �� ���� �޸𸮾��� ���� �̾߱��Ѵ�.
	&input �̶�� ��� �� ���� �޸��� ���� �ø��� ��ȣ(�ּ�, address)�� �̾߱��Ѵ�.


	printf("ȣ����%d\n", input);
	*/

	int in1, in2;

	scanf("%d%d", &in1, &in2);
	printf("�Է��� ���� %d�� %d�� ���� %d �Դϴ�\n", in1, in2, in1 + in2);
}