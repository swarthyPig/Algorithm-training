#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


// strcpy 문자의 복사
void func71() {
	// memcpy : 메모리 복사
	// strcpy : String 복사
	// strncpy(받는놈, 주는놈, 길이) : 복사할 크기를 직접 지정함, 중간에 n  
	// 옮길 배열의 크기를 고려해서 넣어야됨
	char ar[] = "apple";
	char br[10]; // 배열의 크기를 고정시키면 터질수 있음
	strcpy(br, ar); // ar의 내용을 br로 복사

	printf("%s\n", br);

	char cr[] = "apple";
	char *dr = new char[strlen(cr) + 1]; // 메모리 젤 끝에 0집어넣으려고 +1 함
	dr[strlen(cr)] = 0;
	strcpy(dr, cr);

	printf("%s\n", dr);

	delete[]dr;

	// strncpy(dr,cr,3);
}

void main()
{
	srand((unsigned)time(NULL));

	func71();

}