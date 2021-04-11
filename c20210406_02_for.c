#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 : for
	//int i; //반복할 변수
	//for (i=0 ; i<10 ;i+=2) {
	//	printf("%d\n", i);
	//}

	//구구단 출력
	//int dan;
	//1
	//while (1) {
	//	printf("단수입력");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}
	// 
	//2
	//do {
	//		printf("단수입력");
	//		scanf("%d", &dan);
	//		if (dan!=0)
	//		for (int i = 1; i < 10; i++) {
	//			printf("%d * %d = %d\n", dan, i, dan * i);
	//		}
	//} while (dan != 0);

	//이중 for  1단부터 9단까지 한번에출력
	//for (int i = 2; i < 10; i++) {
	//	printf("[%d단]\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i,j,i*j);
	//	}
	//}
	//3중 for
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);

	//1부터 100까지의 합
	//int sum = 0;
	//for (int i = 1; i < 101; i++) {
	//	sum += i;
	//}
	//printf("1부터 100까지의 합은 %d\n", sum);

	//1부터 입력받은 수까지의 합
	//int n, sum = 0;
	//printf("n값은?");
	//scanf("%d", &n);
	//for (int i= 1; i < n + 1; i++) { //i는 for의 지역변수
	//	sum += i;
	//}
	//printf("1부터 %d까지의 합은 %d\n", n, sum);
	//printf("i의 현재값: %d\n", i); //i변수 사용불가

	//두정수를 입력후 큰수에서 작은수를 뺀값을 구하고 0을 입력하면 프로그램종료
	//최대반복횟수는 10번
	// 1)
	// 
	//int a, b, m;
	//for (int i = 0; i < 10; i++) {
	//	printf("두수를 입력하세요");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (b == 0) break;
	//	m = a > b ? a - b : b - a;
	//	printf("큰수를 뺀 값은? %d\n", m);
	//}
	// 0을 입력하면 종료
	// 	   2)
	//int a, b;
	//for (int i = 0; i < 10; i++) {
	//	printf("두수를 입력하세요");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (b == 0) break;
	//	if (a > b)
	//		printf("절대값:%d\n", a - b);
	//	else
	//		printf("절대값:%d\n", b - a);
	//}

	//별찍기
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
	//	//공백출력
	//	for (int j = 0;j<7-i ;j++) {
	//		printf(" ");
	//	}
	//	//별출력
	//	for (int j = 0;j<i+1;j++ ) {
	//		printf("*");

	//	}
	//	printf("\n");
	//}

	//4))
	//for (int i = 0; i < 7; i++) {
	//    //공백출력
	//	for (int j = 0;j<7-i ;j++) {
	//		printf(" ");
	//	}
	//	//별출력
	//	for (int j = 0;j<(i*2)+1;j++ ) {
	//		printf("*");

	//	}
	//	printf("\n");
	//}





	return 0;
}