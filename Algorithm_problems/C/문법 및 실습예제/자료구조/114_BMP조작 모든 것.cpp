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

void func114() {
	FILE *rf = fopen("sample2.bmp", "rb");

	/*
	typedef struct tagBITMAPFILEHEADER {
	WORD    bfType; // �ݵ�� B�� M�� �� �ִ�.
	DWORD   bfSize; // ������ ũ��
	WORD    bfReserved1; // ����1
	WORD    bfReserved2; // ����2
	DWORD   bfOffBits; // 24��Ʈ bmp���Ͽ����� ������ 54�̴�.
	} BITMAPFILEHEADER, FAR *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;

	typedef struct tagBITMAPINFOHEADER{
	DWORD      biSize; // �ݵ�� 40
	LONG       biWidth; // ���� �ػ�
	LONG       biHeight; // ���� �ػ�
	WORD       biPlanes; // �� ���Ͽ� ���ִ� �׸��� ����, ������ 1�� ������
	WORD       biBitCount; // ��Ʈ �÷���, 24�� �� ����
	DWORD      biCompression; // �������� ���� ���θ� ���, 0:�����, 1:����
	DWORD      biSizeImage; // ��ü ���� ����Ʈ - 54
	LONG       biXPelsPerMeter; //0
	LONG       biYPelsPerMeter; //0
	DWORD      biClrUsed; //0
	DWORD      biClrImportant; //0
	} BITMAPINFOHEADER, FAR *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;
	*/

	BITMAPFILEHEADER bf;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	printf("%d\n", bf.bfType); // �ݵ�� B�� M�� �� �ִ�.
	printf("%d\n", bf.bfSize); // ������ ũ��
	printf("%d\n", bf.bfReserved1); // ����1
	printf("%d\n", bf.bfReserved2); // ����2
	printf("%d\n", bf.bfOffBits); // 24��Ʈ bmp���Ͽ����� ������ 54�̴�.
	printf("\n");

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSize);
	printf("%d\n", bi.biWidth); // ���� �ػ�
	printf("%d\n", bi.biHeight); // ���� �ػ�
	printf("%d\n", bi.biPlanes); // �� ���Ͽ� ���ִ� �׸��� ����, ������ 1�� ������
	printf("%d\n", bi.biBitCount); // ��Ʈ �÷���, 24�� �� ����
	printf("%d\n", bi.biCompression); // �������� ���� ���θ� ���, 0:�����, 1:����
	printf("%d\n", bi.biSizeImage); // ��ü ���� ����Ʈ - 54
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
		printf("BMP������ �ƴմϴ�.\n");
	}
	else {
		printf("BMP���� Ȯ�� �Ǿ���.\n");
	}

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSizeImage); // ���ϻ����� -54

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
		printf("BMP������ �ƴմϴ�.\n");
	}
	else {
		printf("BMP���� Ȯ�� �Ǿ���.\n");
	}

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSizeImage); // ���ϻ����� -54

	BYTE *data = new BYTE[bi.biSizeImage];

	fread(data, 1, bi.biSizeImage, rf);
	fclose(rf);

	//------------------------------------------------------------------------------
	/*for (int i = 0; i < 600*800; i++){//������ �츲
	data[i * 3 + 0] = 0; // ù��°0 3 6
	data[i * 3 + 1] = 0; // 1 4 7
	}*/

	/*for (int i = 0; i < 600; i++){ // ��� ����� �츲
	for (int j = 0; j < 800; j++){
	data[(i * 800 + j) * 3] = 0;
	}
	}*/

	/*for (int i = 0; i < 600 * 800; i++) { // �帮�����ϰԳ���
	data[i * 3 + 0] = data[i * 3 + 0] / 2;
	data[i * 3 + 1] = data[i * 3 + 1] / 2;
	data[i * 3 + 2] = data[i * 3 + 2] / 2;
	}*/

	for (int i = 0; i < 600 * 800; i++) { // ��� ����
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

void func114_3() { // ũ�����̱�
	FILE *rf = fopen("sample3.bmp", "rb");

	BITMAPFILEHEADER bf;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	if (bf.bfType != 19778) {
		printf("BMP������ �ƴմϴ�.\n");
	}
	else {
		printf("BMP���� Ȯ�� �Ǿ���.\n");
	}

	BITMAPINFOHEADER bi;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	printf("%d\n", bi.biSizeImage); // ���ϻ����� -54

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

void func114_4() { // ������
	FILE *rf = fopen("sample3.bmp", "rb");
	FILE *rf2 = fopen("sample4.bmp", "rb");

	BITMAPFILEHEADER bf;
	BITMAPFILEHEADER bf2;
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, rf);
	fread(&bf2, sizeof(BITMAPFILEHEADER), 1, rf2);
	if (bf.bfType != 19778) {
		printf("BMP������ �ƴմϴ�.\n");
	}
	else {
		printf("BMP���� Ȯ�� �Ǿ���.\n");
	}
	if (bf2.bfType != 19778) {
		printf("BMP������ �ƴմϴ�.\n");
	}
	else {
		printf("BMP���� Ȯ�� �Ǿ���.\n");
	}

	BITMAPINFOHEADER bi;
	BITMAPINFOHEADER bi2;
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, rf);
	fread(&bi2, sizeof(BITMAPINFOHEADER), 1, rf2);
	printf("%d\n", bi.biSizeImage); // ���ϻ����� -54
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