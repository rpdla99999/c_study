#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 : while
	//while (1) {
	//	printf("c!!!\n");
	//}

	//break 반복문 탈출
	//int cnt = 0;
	//while (1) { //1:true, 0:false
	//	printf("c!!! %d\n",cnt+1);
	//	cnt++;//cnt += 1;//cnt = cnt + 1;
	//	if (cnt > 9) break;
	//}

	//1부터 10까지 합
	//int i=0, sum=0;
	//while (i<100) {
	//	//printf("%d\n", ++i);
	//	sum += ++i;//i=i+1//sum = sum + 1;

	//}
	//printf("합계: %d\n", sum);

	//합이 2000을 넘는 정수와 그합을 구하라
	//int i = 0, sum = 0;
	//while (sum < 2000) {
	//	i++;
	//	sum += i;
	//}
	//printf("정수: %d 합계: %d\n", i,sum);

	//실습 1부터 20까지의 수중 3의배수만 출력
	// 	1)
	//int a = 0;
	//while (a < 20) {
	//	a++;
	//	if (a%3==0)
	//		printf("%d\n", a);
	//	
	//}
	
	// 2)
	//int a = 3;
	//while (a < 20) {
	//	printf("%d\n", a);
	//	a += 3;
	//
	//}

	//3)
	//int a = 0;
	//while (a < 20) {
	//	a+=3;
	//	if (a > 20) break;
	//	printf("%d ", a);
	//}

	//continue:계속
	//1~10까지 출력 짝수만 출력
	//int a = 0;
	//while (a < 10) {
	//	a++;
	//	if (a % 2 != 0) continue;
	//	printf("%d ", a);
	//}




	return 0;
}