#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>_

int main() {
	//if(조건문) :조건식이 참일때 수행할문장
	//int a = 0;
	//if (a > 0) {
	//	printf("양수\n");
	//}
	//else {
	//	//중첩if문
	//	if (a < 0) {
	//		printf("음수\n"); \
	//	}
	//	else {
	//		printf("양수도 음수도 아닙니다.\n");
	//	}
	//}
	
	//표현을 간단하게
	//int a = 0;
	//if (a > 0)
	//	printf("양수\n");
	//else if (a < 0)
	//	printf("음수\n"); 
	//else 
	//	printf("양수도 음수도 아닙니다.\n");

	//실습) 두 정수를 입력받아 큰수를 출력(두수는 같을수도 있다)
	//int a, b;
	//printf("두수를 입력하시오");
	//scanf("%d%d", &a, &b);
	//if (a > b)
	//	printf("%d\n", a);
	//else if (a < b)
	//	printf("%d\n", b);
	//else
	//	printf("두수는 같다\n");

	//실습) 점수를 입력받아 학점을 출력
	//int score;
	//printf("점수를 입력");
	//scanf("%d", &score);
	//if (score > 100)
	//	printf("점수를 다시 입력하세요\n");
	//else if (score < 0)
	//	printf("점수를 다시 입력하세요\n");
	//else if (score >= 90)
	//	printf("A학점\n");
	//else if (score >= 80)
	//	printf("B학점\n");
	//else if (score >= 70)
	//	printf("C학점\n");
	//else if (score >= 60)
	//	printf("D학점\n");
	//else
	//	printf("F학점\n");

	//실습) 국,영,수 점수를 입력받아 촘점과 평균출력 단 60점미만이 한과목이라도 있으면 과락
	//int kor, eng, math;
	//printf("국,영,수 점수를 입력하시오\n");
	//scanf("%d%d%d", &kor, &eng, &math);
	//if (kor < 60 || eng < 60 || math < 60) {
	//	printf("과락\n");
	//}
	//else {
	//	int sum = kor + eng + math;
	//	double avg = sum / 3.;
	//	printf("합계:%d\n", sum);
	//	printf("평균:%.2f\n", avg);
	//}
	//printf("총점은? %d\n", kor + eng + math);
	//printf("평균은? %.2f\n", ((double)kor + eng + math) / 3);

	//if (kor < 60)
	//	printf("국어점수 미만으로 과락\n");
	//else if (eng < 60)
	//	printf("영어점수 미만으로 과락\n");
	//else if (math < 60)
	//	printf("수학점수 미만으로 과락\n");
	
	//실습 연도를 입력하고 윤년 여부
	//int year;
	//printf("년도를 입력하세요\n");
	//scanf("%d", &year);
	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	//	printf("윤년입니다\n");
	//}
	//else {
	//	printf("윤년이 아닙니다\n");
	//}

	//실습 메뉴를 보고 음식을 선택하면 가야할 코너를 알려주시오
	int no;
	printf("메뉴를 골라주세요\n");
	printf("----------------------------------------------------\n");
	printf("1.자장면 2.짬뽕 3.설렁탕 4.비빔밥 5.피자 6.스파게티");
	scanf("%d", &no);
	//if (no == 1 || no == 2) {
	//	printf("중식코너로 가세요\n");
	//}
	//else if (no == 3 || no == 4) {
	//	printf("한식코너로 가세요\n");
	//	}
	//else if (no == 5 || no == 6) {
	//	printf("양식코너로 가세요\n");
	//}
	//else {
	//	printf("잘못된 메뉴\n");
	//}
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