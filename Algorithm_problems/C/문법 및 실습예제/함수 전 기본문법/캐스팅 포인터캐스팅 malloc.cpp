


#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	// int a = 3, b = 4;
	// short c = 5, d = 6;
	
	// a = b; // int = int
	// c = d; // short = short

	// a = (int)c; // int = short 4bite = 2bite, ĳ���� ����? ���ص���

	// c = (short)a; // short = int 2bite = 4bite // ������ �߻� �� Ȯ�� ����, ĳ���� �ʼ�

  /*�䳢 apple;
	�ź��� banana;
	apple = (�䳢)banana;

	ȣ���� *orange;
	�ڳ��� *kiwi;
	orange = (ȣ���� *)kiwi; (Ÿ�� * ) == �ּҸ� �����ִ� �� */

   /*int *p;
	char *q;
	q = new char;

	p = (int *)q;

	short *t;
	t = (short *)p;
	*t = (short)*p;
	
	*/

	// ����Ʈ���� ������ �޸𸮸� ����, �Ҵ� �ޱ� �����̴�.

	short *a;
	a = (short *)malloc(10); // malloc�� ����Ϸ��� ������ �޴� Ÿ������ ĳ���� ����ߵ� 
							 // 5����Ʈ ��� ����
	free(a); // �޸� ��ȯ

	a = (short *)malloc(5 * sizeof(short)); // sizeof�� 10����Ʈ �����
	free(a);
	a = new short[5]; //c++����
	delete[]a;

	long *ptr;
	ptr = (long *)malloc(15 * sizeof(long));
	for (int i = 0; i < 15; i++) {
		*(ptr + i) = i;
	}
	for (int i = 0; i < 15; i++) {
		printf("%d\n", ptr[i]);
	}
	// malloc ���� �ް� delete�� ���� �� �� �ִ°�? ����.
	// malloc�� 1��, 1���̻� �����̾���.

}