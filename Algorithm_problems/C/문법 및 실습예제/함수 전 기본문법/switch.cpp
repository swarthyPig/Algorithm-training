#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	printf("���ڸ� �Է��ϼ���.\n");

	int input = 0;
	scanf("%d", &input);

	// if-else-if ������ switch�� �����ϴٸ� switch�� ����� ��
	switch (input) {

	case 50: // 50������ 10�̵����� �Ѵ� ȣ���̸� ����ϰ������ �ǵ������� break ����

	case 10: // ������ �ü� ����, �ߺ��� �ȵ�
		printf("ȣ����\n");
		break; // �����ϸ� �ڳ���������µ�. 

	case 20:
		printf("�ڳ���\n");
		break;

	case 30: { // case break ���̿� �� ������ �ƴѰ�� {}�� �ִ´�
		printf("�䳢\n");
		printf("�ź���\n");

	}break;
		// �� case break ���̿��� �ٹٲ��� ���ش�.
	default:
		printf("�޹���\n");
		break;
	}

}