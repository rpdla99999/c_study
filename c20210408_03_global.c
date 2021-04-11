#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//전역변수: 프로그램시작시 생성, 프로그램 종료시 소멸
//자동초기화
//전역변수의 무분별한 선언은 신중, 프로그램의 복잡도 증가,메모리사용 증가
int g;
int r; //원의 반지름

void test() {
	//printf("a:%d\n", a);
	printf("g:%d\n", g);
	//사각형의 넓이
	r = 20;
	printf("%d\n", r* r);
}
int main() {
	//전역변수와 지역변수
	//지역변수: 함수가 시작될때 생성,함수가 종료되면 소멸
	//선언된 {}안에서만 사용가능
	//int a = 10;
	printf("a:%d\n", a);

	printf("g:%d\n", g);


	return 0;
}