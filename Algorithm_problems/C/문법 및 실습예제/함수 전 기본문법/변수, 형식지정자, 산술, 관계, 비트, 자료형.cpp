            #include "stdafx.h"

	void main()
	{
	printf("JYG\n"); // JYG 출력하고 줄바꿈
	printf("호\n랑\n이\n"); // 호랑이 각 글자사이에 줄바꿈
	printf("大韓♥\n"); // 한자 등등 특수문자 사용 가능
	printf("호%d랑\n", 100); // 호와 랑 사이에 형식지정자를 통해 100 넣기
	printf("대%d한%d민%d국\n", 10, 20, 30); //대 한 민국 사이에 형식 지정자를 통해 10 20 30 넣기
	printf("%d%d%d\n", 10, 20, 30); // 형식지정자를통해 102030 출력
	printf("코끼리%05d\n", 123); // 형식지정자를 통해 123을 빈자리를 0으로 채우고 5자리로 출력
	printf("코끼리%5d\n", 123); // 형식지정자를 통해 123을 빈자리를 공백으로 채우고 5자리로 출력
	printf("%f\n", 3.14f); // 실수형식으로 3.14출력
	printf("%c\n", 'B'); // 문자출력
	printf("고양이%s\n", "기린"); // 형식지정자를 통해 고양이다음에 기린 출력
	printf("%d%f%c%s%05d", 10, 3.14, 'A', "고양이", 20); // 형식지정자 활용

	int apple; // 변수선언
	apple = 100; //변수에 100넣기
	printf("%d\n", apple); // 100이 들어가있는 변수 apple 출력

	}

----------------------------------------------------------------------------------------------------------------------------------

             int a;
	int b;
	int c, d;
	//int a; 변수이름은 중복 사용불가
	int a30;
	//int 3a; 첫번째 문자는 숫자 사용불가
	//int apple!; 변수명에 특수문자 사용불가
	int apple_$;
	int _300;
	int 사과; // 사용 가능하지만 권장하지않음
	int applenumber; //권장하지않음
	int apple_number; // 괜찮음
	int AppleNumber; //정석(낙타표기법)
	int ShowMeTheMoney;
	int orange = 100;
	int banana;
	banana = 100;
	int kiwi;
	//printf("%d%d%d", orange,banana, kiwi); //kiwi는 초기화가 안되서 사용 불가



------------------------------------------------------------------------------------------------------------------------------

             #include "stdafx.h"

	void main()
	{
	char a = 100; //8bit = 1byte(-128 ~ 127)
	char b = -128;
	printf("%d\n%d\n", a, b);

	short c = 20000;
	short d = 30000;
	printf("%d\n%d\n", c, d);

	long e = 3000000000; //범위를 넘어섰음 그래서 -1294967296 이 출력
	long f = 2000000000;
	printf("%d\n%d\n", e, f);

	signed char g = 100; //음수를 사용하겠다
	unsigned char h = 255; // 음수를 사용하지않겠다
	printf("%d\n%d\n", g, h);

	unsigned long i = 4000000000;
	printf("%lu\n", i);

	}

------------------------------------------------------------------------------------------------------------------------------
            #include "stdafx.h"


	void main()
	{
	printf("%d\n", 17 + 4);
	printf("%d\n", 17 - 4);
	printf("%d\n", 17 * 4);
	printf("%d\n", 17 / 4);
	printf("%d\n", 17 % 4);
	printf("\n");

	int n1 = 17, n2 = 4;

	printf("%d\n", n1 + n2);
	printf("%d\n", n1 - n2);
	printf("%d\n", n1 * n2);
	printf("%d\n", n1 / n2);
	printf("%d\n", n1 % n2);
	printf("\n");

	int a = 10;
	printf("%d\n", a);
	a++; // a라고 하는 메모리의 내용을 1증가시킨다
	printf("%d\n", a);
	a--; // a라고 하는 메모리의 내용을 1감소시킨다
	printf("%d\n", a);
	printf("\n");

	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short)); // 2
	printf("%d\n", sizeof(int)); // 4
	printf("%d\n", sizeof(float)); // 4
	printf("%d\n", sizeof(double)); // 8
	printf("\n");

	printf("%d\n", 3 > 2);
	printf("%d\n", 3 < 2);
	printf("%d\n", 3 >= 2);
	printf("%d\n", 3 <= 2);
	printf("%d\n", 3 == 2);
	printf("%d\n", 3 != 2);
	printf("\n");

	int apple = 0;
	printf("%d\n", apple == 3);
	printf("%d\n", 100 > 90 + 11); //산술 먼저일어나고 관계가 실행됨
	printf("%d\n", (100 > 90) + 11);
	printf("%d\n", 100 > (90 + 11));

	}