#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//선택조건문 : switch ~ case
	//int a = 2;
	//switch (a) {
	//case 0:
	//	printf("zero\n"); break;
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("잘못된 숫자\n");
	//}

	//월의 마지막날 출력
	int mon = 4;
	switch (mon) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31일\n"); break;
	case 2:
		printf("28일\n"); break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30일\n"); break;
	default:
		printf("잘못된 숫자");

	}

	int no;
	printf("메뉴를 골라주세요\n");
	printf("----------------------------------------------------\n");
	printf("1.자장면 2.짬뽕 3.설렁탕 4.비빔밥 5.피자 6.스파게티");
	scanf("%d", &no);
	switch (no) {
	case 1: case 2:
		printf("중식코너\n"); break;
	case 3: case 4:
		printf("한식코너\n"); break;
	case 5: case 6:
		printf("양식코너\n"); break;
	default:
		printf("잘못된 메뉴\n");

	}

	return 0;
}