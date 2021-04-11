#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수:없다, 반환값:없다
void voidTest() {
	printf("void함수\n");
}
//매개변수:한개, 반환값:없다
void voidTest2(int a) {
	printf("매개변수:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("두수의 합:%d\n", a + b);
}

//매개변수:반지름
//원의넓이를 출력해주는 기능
//call by value방식
void area(double r2) { //지역변수: 함수실행시 생성, 함수종료시 소멸
	printf("원의넓이: %.2lf\n", r2 * r2 * 3.14);
}

//매개변수: 반지름(double)
//반환값:넓이(double)
//원의넓이를 구해서 반환하는 함수
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //반환값은 한개
}

//세 정수를 매개변수로 받아서 합을 반환하는 함수
int intReturn(int i,int j,int k) {
	int sum = i + j + k;
	return sum;
}

//두개의 정수를 매개변수로 받아서 나눈실수값을 반환하는 함수
double xx(int a, int b) {
	return((double)a / b);
}

//두수를 매개변수로 받아서 두수중 큰수를 반환하는 함수
int bigReturn(int a, int b) {
	int m;
	if (a > b)
		m = a; //return은 함수의종료
	else if (a < b)
		m = b;
	else
		m = 0;
		
}

//진입점함수
int main() {
	//함수
	//voidTest();
	 
	//voidTest2(10);
	//
	//voidTest3(20, 30);
	//
	//double r; //지역변수
	//printf("반지름: ");
	//scanf("%lf", &r);
	//area(r);
	//
	//double r = 5.6;
	//double rValue=areaReturn(r);
	//printf("원의넓이: %.2lf\n", rValue);
	//
	//int i = 10, j = 20, k = 30;
	//int rSum = intReturn(i, j, k);
	//printf("합계:%d\n", rSum);
	//
	//printf("나눈값:%lf\n",xx(5, 3));
	//int m = bigReturn(20, 20);
	//if (m != 0)
	//	printf("큰수는 %d\n", m);
	//else
	//	printf("두수는 같다\n");
	


	return 0;
}