#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������迭
	//int arr[2][3];
	////arr[0][0] = 1; 
	////arr[0][1] = 2;
	////arr[0][2] = 3;
	////arr[1][0] = 4;
	////arr[2][1] = 5;
	////arr[3][2] = 6;
	//
	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//int csize = sizeof(arr[0]) / sizeof(int);
	//printf("������: %d\n", rsize);
	//for (int i = 0; i < rsize; i++) { //��
	//	for (int j = 0; j < 3; j++) { //��
	//		arr[i][j] = i*3 + j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//} 

	//�ǽ�) �л����� ��/��/�� ����
	int score[2][3];
	for (int i = 0; i < 2; i++) {
		printf("%d)������ ������?", i + 1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	
	printf("---------------------------\n");
	//�հ�,��� ���
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
		}
		//�հ�,���
		printf("[%d]�հ�: %d ���: %.2lf\n", i + 1, sum, (double)sum / 3);
	}	





	return 0;
}