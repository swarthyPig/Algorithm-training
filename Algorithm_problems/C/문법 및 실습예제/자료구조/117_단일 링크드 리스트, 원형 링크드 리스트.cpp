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


/* // ������� ���ϴ� ��
typedef struct { // typedef������� : ��Ī�� ����ϱ� ���ؼ�
    int a;
    STRU101 b;
    STRU101 *c;

}STRU101;

void func117_1() {
    STRU101 st;
    st.a;
    // st.b; �ڱ�޸� ���� �ڱ� �޸𸮸���� �ݺ��ϱ⶧���� ��� ����
    st.c = new STRU101; //c�� �޸𸮰� ���� ������ �޸𸮸� �޾Ƽ� ����ϴ� �� ����
    st.c->a = 10;
    st.c->c = NULL;

	delete st.c;
}
*/
struct STRU102 {
	int a, b;
	//STRU102 c; // ����� �� ����
	STRU102 *n;
};
void func117_2() { // ���� ��ũ�� ����Ʈ
	STRU102 st; // ù ��° �ڽ�
	st.a = 10;
	st.b = 20;
	st.n = new STRU102; // �� ��° �ڽ�
	st.n->a = 30;
	st.n->b = 40;
	st.n->n = new STRU102; // �� ��° �ڽ�
	st.n->n->a = 50;
	st.n->n->b = 60;
	st.n->n->n = NULL;

	printf("%d ", st.a);
	printf("%d ", st.b);
	printf("%d ", st.n->a);
	printf("%d ", st.n->b);
	printf("%d ", st.n->n->a);
	printf("%d ", st.n->n->b);

	delete st.n->n;
	delete st.n;

}

struct STRU103 {
	int a, b;
	//STRU102 c; // ����� �� ����
	STRU103 *n;
};
void func117_3() {  // ���� ��ũ�帮��Ʈ
	STRU103 st;
	STRU103 *temp;

	temp = &st; // ����

	for (int i = 0; i < 3; i++) {
		temp->a = i * 2 + 0; // 0, 2, 4
		temp->b = i * 2 + 1; // 1, 3, 5
		temp->n = new STRU103; // 3�� �Ҵ�
		temp = temp->n; // ���������� ����Ŵ
	}

	temp = &st;
	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", temp->a, temp->b);
		temp = temp->n;
	}

	/*delete st.n->n->n;
	delete st.n->n;
	delete st.n;*/

	// temp = 999 100 200 300 // 3��������  
	//        100 200 300 null
	temp = st.n; // 100
	for (int i = 0; i < 3; i++) {
		STRU103 *q = temp->n; // ��� 200, 300
		delete temp; // 100�� �޸� ���� ,200 ����, 300����
		temp = q; // 200, 
	}
}

void main() {
	srand((unsigned)time(NULL));

	//func117_1();
	//func117_2();
	func117_3();
}