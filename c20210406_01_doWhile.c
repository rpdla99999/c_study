#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//do ~while
	//int a = -1;
	//do {
	//	printf("%d ", a);
	//} while (a>0); //최소 한번은 실행

	//사용자에게 입력을 받아서 y이면 뮤직플레이 출력
	// 	   1)
	//char answer='y';
	//while (answer == 'y') {
	//	printf("뮤직을 플레이할까요?(y)?");
	//	scanf("%c", &answer);
	//	getchar(); //엔터값 처리
	//	printf("뮤직플레이\n");
	//	
	//}

	//2)
	//char answer;
	//do {
	//	printf("뮤직플레이\n");
	//	printf("계속 할까요?(y)?");
	//	scanf("%c", &answer);
	//	getchar(); //엔터값 처리
	//} 	while (answer == 'y');

	//정수를 계속 입력받아서 합게를 더하고 0을 입력하면 합계후 종료하는프로그램
	int a,sum=0;
	do {
		printf("정수를 입력하세요");
		scanf("%d", &a);
		sum += a;
	} while (a != 0);
	printf("합게는 %d\n", sum);



	return 0;
}