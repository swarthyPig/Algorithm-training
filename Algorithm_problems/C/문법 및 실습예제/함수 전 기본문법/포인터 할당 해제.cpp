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

	int *a;
	a = new int; // new �ڿ��� �ڱ��ڽ��� Ÿ�� ����� ���� �� �� ����. �޸� 1�� �䱸
	delete a; // 1���� �޸� ��ȯ

	int *b;
	b = new int[6]; // 1�� �̻� �޸� �䱸
	delete[]b; // 1�� �̻� �޸� �޾Ҵ��� ��ȯ
}


------------------------------------------------------------------------------------------------------------------------------------------

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

	int *a; // �����ͺ��� ����

	a = new int; // int�� �޸� �Ҵ�
	*a = 100; // ���뿡 100����
	printf("%d %d\n", a, *a); // ��� : �ּҰ�, ���밪
	delete a; // �Ҵ���� �޸� ��ȯ

	int num = 200; // �Ϲݺ����� �� 200 ����
	a = &num; // �ּ� = �ּ�, �Ϲ� ���� num�� �ּҸ� �����ͺ��� a�� �ּҿ� ����
	printf("%d %d %d %d\n", a, *a, &num, num);//(�ּ�, ��, �ּ�, ��)
	
	//delete a; //�Ϲ� ���� �޸𸮴� ������ �ȵ�

	a = new int[6]; // num�̶� ���� ����, ���� �Ҵ�
	*(a + 0) = 10; // ��ȣ�Ǵ� ����, �������� -> *(a + 0), a[0], *a, *(a)
	a[1] = 20; // *(a + 1) = 20
	a[5] = 60; //  *(a + 5) = 60

	for (int i = 0; i < 6; i++) {
		//printf("%d %d\n", a+i,*(a+i)); //(�ּ�,��)
		printf("%d %d\n", &a[i], a[i]); // ���� ���� ����
	}printf("\n");

	delete[]a; //1�� �̻� �޸� ����

	a = &num; //������ ������ �޸� ������ �Ͼ 
	printf("%d %d\n", a, *a);
	// �޸� ��ȯ �� �ʿ����, �Ϲ� ������ �޸� ���� x
}


--------------------------------------------------------------------------------------------------------------------------------
	
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

	//char *g, h, *i; // Ȯ���� �޸� 9����Ʈ, ��� �� �� �ִ� �޸𸮴� 1����Ʈ(h)
	//short *d, e, *f; // Ȯ���� �޸𸮴� 10����Ʈ, ��� �� ���ִ� �޸𸮴� 2����Ʈ(e),
	// �⺻������ �ּҸ� ������ �޸� 4����Ʈ

	int *a, b = 100, *c; //Ȯ���� �޸𸮴� 12����Ʈ, ��� �� �� �ִ� �޸𸮴� 4����Ʈ(b) 
						 //*a = 100; �ּҹޱ� ������ ��� �Ұ�
	a = &b; // �ּ� = �ּ�, ������ a�� b���ּҸ� ��������
	c = a; // �ּ� = �ּ�, ������ c�� a�� �ּҸ� ��������
	printf("%d %d %d\n", *a, b, *c); // (����, ����, ����)
	printf("%d %d %d\n", a, &b, c); // (�ּ�, �ּ�, �ּ�)

	c = new int; // �����ͺ��� c�� �޸𸮸� �Ҵ� ����
	a = c; // �ּ� = �ּ�, �����ͺ��� a�� c���ּҸ� ��������
	*a = 30; //  ������ a�� ���뿡 30�� ����
	printf("%d %d\n", *a, *c); // (����, ����)

	delete a; //a�� c�� �� �̻� ��� �� �� ����
	
	a = new int[1000];
	// a�� ��� ��
	c = a;
	// c�� ��� ��
	delete[]c; // 1�� �̻��� �� ����

	printf("%d %d\n", *a, *c); // ���⼭�� ���̻� a�� c�� ��� �� �� ����.
}