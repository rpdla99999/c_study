#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ��� : for
	//int i; //�ݺ��� ����
	//for (i=0 ; i<10 ;i+=2) {
	//	printf("%d\n", i);
	//}

	//������ ���
	//int dan;
	//1
	//while (1) {
	//	printf("�ܼ��Է�");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}
	// 
	//2
	//do {
	//		printf("�ܼ��Է�");
	//		scanf("%d", &dan);
	//		if (dan!=0)
	//		for (int i = 1; i < 10; i++) {
	//			printf("%d * %d = %d\n", dan, i, dan * i);
	//		}
	//} while (dan != 0);

	//���� for  1�ܺ��� 9�ܱ��� �ѹ������
	//for (int i = 2; i < 10; i++) {
	//	printf("[%d��]\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i,j,i*j);
	//	}
	//}
	//3�� for
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);

	//1���� 100������ ��
	//int sum = 0;
	//for (int i = 1; i < 101; i++) {
	//	sum += i;
	//}
	//printf("1���� 100������ ���� %d\n", sum);

	//1���� �Է¹��� �������� ��
	//int n, sum = 0;
	//printf("n����?");
	//scanf("%d", &n);
	//for (int i= 1; i < n + 1; i++) { //i�� for�� ��������
	//	sum += i;
	//}
	//printf("1���� %d������ ���� %d\n", n, sum);
	//printf("i�� ���簪: %d\n", i); //i���� ���Ұ�

	//�������� �Է��� ū������ �������� ������ ���ϰ� 0�� �Է��ϸ� ���α׷�����
	//�ִ�ݺ�Ƚ���� 10��
	// 1)
	// 
	//int a, b, m;
	//for (int i = 0; i < 10; i++) {
	//	printf("�μ��� �Է��ϼ���");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (b == 0) break;
	//	m = a > b ? a - b : b - a;
	//	printf("ū���� �� ����? %d\n", m);
	//}
	// 0�� �Է��ϸ� ����
	// 	   2)
	//int a, b;
	//for (int i = 0; i < 10; i++) {
	//	printf("�μ��� �Է��ϼ���");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (b == 0) break;
	//	if (a > b)
	//		printf("���밪:%d\n", a - b);
	//	else
	//		printf("���밪:%d\n", b - a);
	//}

	//�����
	//1))
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	// 
	//2)
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7-i ; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//3))
	//for (int i = 0; i < 7; i++) {
	//	//�������
	//	for (int j = 0;j<7-i ;j++) {
	//		printf(" ");
	//	}
	//	//�����
	//	for (int j = 0;j<i+1;j++ ) {
	//		printf("*");

	//	}
	//	printf("\n");
	//}

	//4))
	//for (int i = 0; i < 7; i++) {
	//    //�������
	//	for (int j = 0;j<7-i ;j++) {
	//		printf(" ");
	//	}
	//	//�����
	//	for (int j = 0;j<(i*2)+1;j++ ) {
	//		printf("*");

	//	}
	//	printf("\n");
	//}





	return 0;
}