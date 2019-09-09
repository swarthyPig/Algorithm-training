#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

struct ST79_1 {
	int *p;
};

struct ST79_2 {
	ST79_1 *s;
};

struct ST79_3 {
	ST79_2 *t;
};

// 중첩 구조체 사용 
void func79() {
	ST79_3 *st;

	st = new ST79_3;
	st->t = new ST79_2;
	st->t->s = new ST79_1;
	st->t->s->p = new int;

	*st->t->s->p = 100;

	delete st->t->s->p;
	delete st->t->s;
	delete st->t;
	delete st;

	ST79_3 *ts;

	ts = new ST79_3[3];
	ts[0].t = new ST79_2[10];
	ts[0].t[9].s = new ST79_1;
	ts[0].t[9].s->p = new int[100]; // 1개받았으니까 ->

	for (int i = 0; i < 100; i++) {
		ts[0].t[9].s->p[i] = i;
	}

	for (int i = 0; i < 100; i++) {
		printf("%d", ts[0].t[9].s->p[i]);
	}printf("\n");

	delete[]ts[0].t[9].s->p;
	delete ts[0].t[9].s;
	delete[]ts[0].t;
	delete[]ts;
}

void main()
{
	srand((unsigned)time(NULL));

	func79();

}