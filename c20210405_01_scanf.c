#define _CRT_SECURE_NO_WARNINGS //scanf함수를 사용하기 위해서
#include <stdio.h>

int main(void) {
	//입력함수
	//정수형 입력받기
	//int a;

	//printf("정수는?");
	//scanf("%d",&a); //a의 주소
	//printf("입력한 값: %d   주소:%p\n",a,&a);

	//실수형 입력받기
	//float f;
	//double d;
	//printf("float 실수는?");
	//scanf("%f",&f);
	//printf("double 실수는?");
	//scanf("%lf", &d); //포멧문 double일 경우 : %lf

	//printf("입력한 값:\n %f %p\n %f %p\n", f,&f,d,&d);

	//문자형 입력받기
	//char c;
	//printf("문자: ");
	//scanf("%c", &c);
	//printf("입력한 문자: %c", c);
	
	//실습) 두 정수를 입력받아 합계를 출력
	//int a, b;
	//printf("첫번째수는? ");
	//scanf("%d", &a);
	//printf("두번째수는? ");
	//scanf("%d", &b);

	//printf("두수를 입력하세요");
	//scanf("%d%d", &a, &b);
	//printf("합계: %d\n", a + b);

	//실습)오늘의 날짜(연,월,일)을 입력받아 출력
	//int year, month, day;
	//printf("연,월,일 을 입력하세요");
	//scanf("%d%d%d", &year, &month, &day);
	//printf("%d년 %d월 %d일\n", year, month, day);

	//실습) 두 정수를 입력받아 산술연산을 구해보시오
	//int a, b;
	//printf("두수를 입력하세요");
	//scanf("%d%d", &a, &b);
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %.2lf\n", a, b, (double)a / b);

	//엔터를 처리하기위한 예제
	//int a, b;
	//char sign;
	//printf("first?"); //10+20
	//scanf("%d",&a);
	//printf("second?");
	//scanf("%d", &b);

	////한문자를 읽어서 반환하는 함수
	//getchar(); //엔터를 처리하기위한 목적
	//printf("sign?");
	//scanf("%c", &sign);
	//printf("%d %c %d\n", a, sign, b);

	//실습) 물건구입후 거스름돈을 계산하여 출력하시오
	//삼항연산자
	//int amount, pay;
	//printf("물건가격? ");
	//scanf("%d", &amount);
	//printf("낸돈? ");
	//scanf("%d", &pay);
	//pay > amount ?
	//	printf("거스름돈:%d\n", pay - amount) :
	//	amount > pay ?
	//	printf("부족금액:%d\n", amount - pay) :
	//	printf("정산완료\n");

	//실습)국,영,수 점수를 입력받아 합계와 평균을 구하라
	//int korean, english, math;
	//printf("국어점수: ");
	//scanf("%d", &korean);
	//printf("영어점수: ");
	//scanf("%d", &english);
	//printf("수학점수: ");
	//scanf("%d", &math);
	// 
	//printf("국영수 점수:");
	//scanf("%d%d%d", &korean, &english, &math);
	//printf("합계점수: %d\n", korean + english + math);
	//printf("평균점수: %.2lf\n", ((double)korean + english + math) / 3);

	//printf("국영수 점수:");
	//scanf("%d%d%d",&korean,&english,&math);
	//int sum = korean + english + math;
	//printf("합계점수: %d\n", sum);
	//printf("평균점수: %.2lf\n", (double)sum / 3);

	//rgb값 만들기
	//int r, g, b;
	//printf("red?"); scanf("%d", &r);
	//printf("green?"); scanf("%d", &g);
	//printf("blue?"); scanf("%d", &b);
	//unsigned int rgb = r << 16| g << 8| b;
	//printf("RGB: %0X\n", rgb);


		




	return 0;
}