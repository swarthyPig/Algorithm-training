#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	char a = 65; // �ƽ�Ű�ڵ� 'A'
	char b = 'A'; // �������� �Ǹ鼭 char b�� 65; �ڵ�� ����˴ϴ�.
	printf("%d\n%d\n", a, b);
	printf("%c\n%c\n", a, b); // %c�� �ƽ�Ű�ڵ忡 ���õǴ� ���ڸ� ������ش�
	char c = '8';
	printf("%c\n%d\n", c, c);

	for (int a = 0; a < 26; a++) {
		printf("%c %d\n", 'A' + a, 65 + a); // ������ ������ 'A'+65 �� �� ����.
	}

	for (int i = 0; i < 26; i++) { //�빮�ڿ� �ҹ����� �ƽ�Ű�ڵ尪�� ���̴� �׻� 32�̴�.
		printf("%d\n", ('a' + i) - ('A' + i));
	}
}