#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	int count = 0; // ���ڷ� ct�� ����Ѵ�.

	while (count < 10) { //���ѷ���
		count++;
		printf("ȣ���� ");
	}
	printf("�ڳ���");

				   // �̷� �ڵ�� �ۼ����� �ʴ´�. �ݺ�Ƚ���� �˶� : for �𸦶� : while
				   /*while (count < 10) { //���ѷ���
				   count++;
				   printf("ȣ���� ");
				   }
				   printf("�ڳ���");
				   */

				   /*while (true) {
				   if (count == 5) {
				   printf("���α׷��� ����˴ϴ�.");
				   break; // Ż��
				   }
				   printf("%d", count);
				   count++;
				   }*/
				   /*
				   while (1) {
				   printf("ȣ����");
				   printf("ȣ����");
				   printf("ȣ����");
				   break;
				   printf("ȣ����");
				   printf("ȣ����");
				   break;
				   printf("ȣ����");
				   }
				   */
	int num = 0;
	scanf("%d", &num);
	while (1) {
		printf("%d\n", num);
		if (num == 1) {
			printf("��ڼ��� ��� ��� �Ͽ����ϴ�.");
			printf("ȣ����");
			break;
		}
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = 3 * num + 1;
		}
	}

}