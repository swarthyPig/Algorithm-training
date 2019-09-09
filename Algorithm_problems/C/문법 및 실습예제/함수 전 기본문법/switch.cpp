#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	printf("숫자를 입력하세요.\n");

	int input = 0;
	scanf("%d", &input);

	// if-else-if 문장이 switch로 가능하다면 switch를 사용할 것
	switch (input) {

	case 50: // 50들어오든 10이들어오든 둘다 호랑이를 출력하고싶을때 의도적으로 break 제거

	case 10: // 변수가 올수 없음, 중복이 안됨
		printf("호랑이\n");
		break; // 생략하면 코끼리까지출력됨. 

	case 20:
		printf("코끼리\n");
		break;

	case 30: { // case break 사이에 한 문장이 아닌경우 {}를 넣는다
		printf("토끼\n");
		printf("거북이\n");

	}break;
		// 각 case break 사이에는 줄바꿈을 해준다.
	default:
		printf("앵무새\n");
		break;
	}

}