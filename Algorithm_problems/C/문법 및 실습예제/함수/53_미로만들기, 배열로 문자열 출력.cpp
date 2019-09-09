#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func53() {
	char ar[4]; // 4
	char br[4] = { 'A', 'B', 'C', 'D' }; //4
	char cr[] = { 'A', 'B', 'C', 'D' }; //4
	char dr[] = "ABCD"; // 문자열로 집어넣었을 때 메모리를 하나더줌 //5
	printf("%d %d %d %d\n", sizeof(ar), sizeof(br), sizeof(cr), sizeof(dr));
	printf("%s\n", br); // 이렇게출력하는 것은 비정상적, 글자 깨져서 나옴
	printf("%s\n", dr);

	char er[3][4] = { // 미로찾기 알고리즘
		'#','#','#','#',
		'#','.','.','#',
		'#','#','#','#'
	};

	char fr[8][12 + 1] = { // 미로찾기 알고리즘, 문자열은 하나 더 필요함, 배열 크기생략가능 가로개수 
		"############",
		"#..........#",
		"#..........#",
		"#..........#",
		"#..........#",
		"#..........#",
		"#..........#",
		"############"
	};

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 12 + 1; j++) {
			printf("%c ", fr[i][j]);
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func53();
}