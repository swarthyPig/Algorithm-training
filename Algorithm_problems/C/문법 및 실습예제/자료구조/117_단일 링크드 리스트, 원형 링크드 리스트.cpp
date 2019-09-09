#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


/* // 사용하지 못하는 논리
typedef struct { // typedef사용이유 : 별칭을 사용하기 위해서
    int a;
    STRU101 b;
    STRU101 *c;

}STRU101;

void func117_1() {
    STRU101 st;
    st.a;
    // st.b; 자기메모리 에서 자기 메모리만들고 반복하기때문에 사용 금지
    st.c = new STRU101; //c는 메모리가 없기 때문에 메모리를 받아서 사용하는 건 가능
    st.c->a = 10;
    st.c->c = NULL;

	delete st.c;
}
*/
struct STRU102 {
	int a, b;
	//STRU102 c; // 사용할 수 없음
	STRU102 *n;
};
void func117_2() { // 단일 링크드 리스트
	STRU102 st; // 첫 번째 박스
	st.a = 10;
	st.b = 20;
	st.n = new STRU102; // 두 번째 박스
	st.n->a = 30;
	st.n->b = 40;
	st.n->n = new STRU102; // 세 번째 박스
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
	//STRU102 c; // 사용할 수 없음
	STRU103 *n;
};
void func117_3() {  // 원형 링크드리스트
	STRU103 st;
	STRU103 *temp;

	temp = &st; // 공유

	for (int i = 0; i < 3; i++) {
		temp->a = i * 2 + 0; // 0, 2, 4
		temp->b = i * 2 + 1; // 1, 3, 5
		temp->n = new STRU103; // 3번 할당
		temp = temp->n; // 다음데이터 가리킴
	}

	temp = &st;
	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", temp->a, temp->b);
		temp = temp->n;
	}

	/*delete st.n->n->n;
	delete st.n->n;
	delete st.n;*/

	// temp = 999 100 200 300 // 3번돌릴때  
	//        100 200 300 null
	temp = st.n; // 100
	for (int i = 0; i < 3; i++) {
		STRU103 *q = temp->n; // 백업 200, 300
		delete temp; // 100번 메모리 삭제 ,200 삭제, 300삭제
		temp = q; // 200, 
	}
}

void main() {
	srand((unsigned)time(NULL));

	//func117_1();
	//func117_2();
	func117_3();
}