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

void func112() {
	FILE *wf = fopen("sample.txt", "wb");

	//fwrite("B", 1, 1, wf); // (출력할 데이터 메모리의 시작 주소, 1byte씩, 1번, 출력포인트)

	//fwrite("Banana", 1, 6, wf);

	/*const char *s = "Orange";
	fwrite(s, 1, 6, wf);*/

	/*const char *s = "무궁화꽃이피었습니다.";
	//printf("%d", strlen(s));
	fwrite(s, 1, strlen(s), wf);*/

	/*for (int i = 0; i < 26; i++){
	char ch = 'A' + i;
	fwrite(&ch, 1, 1, wf);
	}*/

	/*printf("%d %x\n", 'A', 'A' ); // 41는 A에대한 16진수값
	줄 바꿈의 코드 번호는 0x0D 0x0A이다.
	탭의 코드 번호는 0x09 이다.
	스페이스 코드 번호는 0x20.*/

	/*for (int i = 0; i < 3; i++){
	for (int j = 0; i < 4; i++){
	char ch = 'A';
	fwrite(&ch , 1, 1, wf);
	}
	char c1 = 0x00;
	char c2 = 0x0A;
	fwrite(&c1, 1, 1, wf);
	fwrite(&c2, 1, 1, wf);
	}*/

	/*short n1 = 0x12ab; // 2바이트
	fwrite(&n1, 2, 1, wf);
	fwrite(&n1, sizeof(short), 1, wf); // 주로사용*/

	/*long n1 = 0x12345678;
	fwrite(&n1, 2, 1, wf);
	fwrite(&n1, sizeof(long), 1, wf);*/

	/*int ar[10];
	for (int i = 0; i < 10; i++){
		ar[i] = i;
	}
	fwrite(ar, sizeof(int), 10, wf);*/

	/*char *p = new char[20];
	for (int i = 0; i < 20; i++){
		p[i] = i;
	}
	fwrite(p, sizeof(char), 20, wf);

	delete[]p;*/

	/*struct STRU {
	int a;
	int b;
	int c;
	};

	STRU st = {10, 20, 30};
	printf("%d %d %d\n", st.a, st.b, st.c);*/

	/*fwrite(&st.a, sizeof(int), 1, wf);
	fwrite(&st.b, sizeof(int), 1, wf);
	fwrite(&st.c, sizeof(int), 1, wf);*/
	//fwrite(&st, sizeof(STRU), 1, wf); // 위 세 줄이랑 같은 코드
	// 단 주의 할 점은 구조체 안에 포인터 변수가 들어있을 때는 이렇게 쓸수 없다.
	fclose(wf); // 꼭 닫아야됨
}

void main()
{
	srand((unsigned)time(NULL));

	func112();
}