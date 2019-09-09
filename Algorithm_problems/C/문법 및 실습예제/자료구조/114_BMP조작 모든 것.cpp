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

void func114() {
	FILE *rf = fopen("sample2.bmp", "rb");

	/*
	typedef struct tagBITMAPFILEHEADER {
	WORD    bfType; // 반드시 B와 M이 들어가 있다.
	DWORD   bfSize; // 파일의 크기
	WORD    bfReserved1; // 예약1
	WORD    bfReserved2; // 예약2
	DWORD   bfOffBits; // 24비트 bmp파일에서는 무조건 54이다.
	} BITMAPFILEHEADER, FAR *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;

	typedef struct tagBITMAPINFOHEADER{
	DWORD      biSize; // 반드시 40
	LONG       biWidth; // 가로 해상도
	LONG       biHeight; // 세로 해상도
	WORD       biPlanes; // 이 파일에 들어가있는 그림의 갯수, 쓸모없어서 1이 들어가있음
	WORD       biBitCount; // 비트 컬러수, 24가 들어가 있음
	DWORD      biCompression; // 데이터의 압축 여부를 기록, 0:비압축, 1:압축
	DWORD      biSizeImage; // 전체 파일 사이트 - 54
	LONG       biXPelsPerMeter; //0
	LONG       biYPelsPerMeter; //0
	DWORD      biClrUsed; //0
	DWORD      biClrImportant; //0
	} BITMAPINFOHEADER, FAR *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;
	*/

	BITMAPFILEHEADER bf;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	printf("%d\n", bf.bfType); // 반드시 B와 M이 들어가 있다.
	printf("%d\n", bf.bfSize); // 파일의 크기
	printf("%d\n", bf.bfReserved1); // 예약1
	printf("%d\n", bf.bfReserved2); // 예약2
	printf("%d\n", bf.bfOffBits); // 24비트 bmp파일에서는 무조건 54이다.
	printf("\n");

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSize);
	printf("%d\n", bi.biWidth); // 가로 해상도
	printf("%d\n", bi.biHeight); // 세로 해상도
	printf("%d\n", bi.biPlanes); // 이 파일에 들어가있는 그림의 갯수, 쓸모없어서 1이 들어가있음
	printf("%d\n", bi.biBitCount); // 비트 컬러수, 24가 들어가 있음
	printf("%d\n", bi.biCompression); // 데이터의 압축 여부를 기록, 0:비압축, 1:압축
	printf("%d\n", bi.biSizeImage); // 전체 파일 사이트 - 54
	printf("%d\n", bi.biXPelsPerMeter);
	printf("%d\n", bi.biYPelsPerMeter);
	printf("%d\n", bi.biClrUsed);
	printf("%d\n", bi.biClrImportant);


	fclose(rf);
}

void func114_1() {
	FILE *rf = fopen("sample3.bmp", "rb");

	BITMAPFILEHEADER bf;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	if (bf.bfType != 19778) {
		printf("BMP파일이 아닙니다.\n");
	}
	else {
		printf("BMP파일 확인 되었음.\n");
	}

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSizeImage); // 파일사이즈 -54

	BYTE *data = new BYTE[bi.biSizeImage];

	fread(data, 1, bi.biSizeImage, rf);
	fclose(rf);

	//------------------------------------------------------------------------------

	FILE *wf = fopen("sample99.bmp", "wb");
	fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, wf);
	fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, wf);

	fwrite(data, 1, bi.biSizeImage, wf);

	fclose(wf);
	delete[]data;

}

void func114_2() {
	FILE *rf = fopen("sample3.bmp", "rb");

	BITMAPFILEHEADER bf;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	if (bf.bfType != 19778) {
		printf("BMP파일이 아닙니다.\n");
	}
	else {
		printf("BMP파일 확인 되었음.\n");
	}

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSizeImage); // 파일사이즈 -54

	BYTE *data = new BYTE[bi.biSizeImage];

	fread(data, 1, bi.biSizeImage, rf);
	fclose(rf);

	//------------------------------------------------------------------------------
	/*for (int i = 0; i < 600*800; i++){//빨간색 살림
	data[i * 3 + 0] = 0; // 첫번째0 3 6
	data[i * 3 + 1] = 0; // 1 4 7
	}*/

	/*for (int i = 0; i < 600; i++){ // 녹색 노란색 살림
	for (int j = 0; j < 800; j++){
	data[(i * 800 + j) * 3] = 0;
	}
	}*/

	/*for (int i = 0; i < 600 * 800; i++) { // 흐리멍텅하게나옴
	data[i * 3 + 0] = data[i * 3 + 0] / 2;
	data[i * 3 + 1] = data[i * 3 + 1] / 2;
	data[i * 3 + 2] = data[i * 3 + 2] / 2;
	}*/

	for (int i = 0; i < 600 * 800; i++) { // 밝기 증가
		data[i * 3 + 0] = min(0xff, data[i * 3 + 0] * 2);
		data[i * 3 + 1] = min(0xff, data[i * 3 + 1] * 2);
		data[i * 3 + 2] = min(0xff, data[i * 3 + 2] * 2);
	}

	FILE *wf = fopen("sample99.bmp", "wb");
	fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, wf);
	fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, wf);

	fwrite(data, 1, bi.biSizeImage, wf);

	fclose(wf);
	delete[]data;

}

void func114_3() { // 크기줄이기
	FILE *rf = fopen("sample3.bmp", "rb");

	BITMAPFILEHEADER bf;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	if (bf.bfType != 19778) {
		printf("BMP파일이 아닙니다.\n");
	}
	else {
		printf("BMP파일 확인 되었음.\n");
	}

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSizeImage); // 파일사이즈 -54

	BYTE *data = new BYTE[bi.biSizeImage];

	fread(data, 1, bi.biSizeImage, rf);
	fclose(rf);
	//------------------------------------------------------------------------------
	bf.bfSize = 400 * 300 * 3 - 54;
	bi.biWidth = 400;
	bi.biHeight = 300;
	bi.biSizeImage = 400 * 300 * 3;

	BYTE *data2 = new BYTE[bi.biSizeImage];

	for (int i = 0; i < 600 * 800; i++) {
		data[i * 3 + 0] = data[i * 3 + 0];
		data[i * 3 + 1] = data[i * 3 + 1];
		data[i * 3 + 2] = data[i * 3 + 2];
	}

	for (int i = 0, j = 0; i < 300 * 400; i++, j += 2) {
		data2[i * 3 + 0] = data[j * 3 + 0];
		data2[i * 3 + 1] = data[j * 3 + 1];
		data2[i * 3 + 2] = data[j * 3 + 2];
	}

	FILE *wf = fopen("sample99.bmp", "wb");
	fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, wf);
	fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, wf);

	fwrite(data2, 1, bi.biSizeImage, wf);

	fclose(wf);
	delete[]data;
	delete[]data2;

}

void func114_4() { // 오버랩
	FILE *rf = fopen("sample3.bmp", "rb");
	FILE *rf2 = fopen("sample4.bmp", "rb");

	BITMAPFILEHEADER bf;
	BITMAPFILEHEADER bf2;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	fread(&bf2, sizeof(BITMAPFILEHEADER), 1, rf2);
	if (bf.bfType != 19778) {
		printf("BMP파일이 아닙니다.\n");
	}
	else {
		printf("BMP파일 확인 되었음.\n");
	}
	if (bf2.bfType != 19778) {
		printf("BMP파일이 아닙니다.\n");
	}
	else {
		printf("BMP파일 확인 되었음.\n");
	}

	BITMAPINFOHEADER bi;
	BITMAPINFOHEADER bi2;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	fread(&bi2, sizeof(BITMAPINFOHEADER), 1, rf2);
	printf("%d\n", bi.biSizeImage); // 파일사이즈 -54
	printf("%d\n", bi2.biSizeImage);

	BYTE *data = new BYTE[bi.biSizeImage];
	BYTE *data2 = new BYTE[bi2.biSizeImage];

	fread(data, 1, bi.biSizeImage, rf);
	fread(data2, 1, bi2.biSizeImage, rf2);
	fclose(rf);
	fclose(rf2);
	//------------------------------------------------------------------------------

	for (int i = 0; i < 600; i++) {
		for (int j = 0; j < 800; j++) {

			data[(i * 800 + j) * 3 + 0] = data[(i * 800 + j) * 3 + 0] / 2 + data2[(i * 800 + j) * 3 + 0] / 2;
			data[(i * 800 + j) * 3 + 1] = data[(i * 800 + j) * 3 + 1] / 2 + data2[(i * 800 + j) * 3 + 1] / 2;
			data[(i * 800 + j) * 3 + 2] = data[(i * 800 + j) * 3 + 2] / 2 + data2[(i * 800 + j) * 3 + 2] / 2;
		}
	}

	FILE *wf = fopen("sample99.bmp", "wb");
	fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, wf);
	fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, wf);

	fwrite(data, 1, bi.biSizeImage, wf);

	fclose(wf);
	delete[]data;
	delete[]data2;

}
void main()
{
	srand((unsigned)time(NULL));

	//func114();
	//func114_1();
	//func114_2();
	//func114_3();
	//func114_4();
}