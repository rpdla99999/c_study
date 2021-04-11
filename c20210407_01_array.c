#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5
int main() {
	//배열 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr,sizeof(arr));

	//반복문을 이용해서 초기화
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1)*10;

	//}
	////반복문을 이용해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	//실습 
	//double arr[3] = { 1.1,2.1,3.1 };
	//double arr[5];
	////배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double);
	//printf("사이즈: %d\n", size);

	////반복문을 이용해서 초기화
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}

	////반복문을 이용해서 출력
	//for (int i = 0; i < size; i++) {
	//	printf("%.1lf ", arr[i]);
	//}

	//문자형 배열
	//char arr[] = { 'a','b','c','d','e','f' };
	//char size = sizeof(arr) / sizeof(char);
	//printf("사이즈: %d\n", size); 
	//	for (int i = 0; i < size; i++){
	//		printf("%c ", arr[i]);
	//}
	
	//배열값의 합
	//c는 정적배열
	//a에 값이 할당되는 시점은 런타임시
	//const int a=5; //상수: 변경이 불가능
	//#define에 정의된 매크로상수: 컴파일되기 전에 대체
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//printf("사이즈: %d\n", size);

	////입력받기
	//for (int i = 0; i < size; i++) {
	//	printf("[%d}정수입력",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i],&arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계:%d\n", sum);

	//실습 반 학생의 점수를 입력받아 번호대로 배열에 저장하고 번호 순대로 출력 합계/평균/검색
	int arr[5],sum=0; 
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++) {
		printf("%d번 점수: \n", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("-----------------------\n");
	for (int i = 0; i < size; i++) {
		printf("%d번은 %d점\n", i + 1, arr[i]);
		sum += arr[i];
	}
	printf("합계는 %d점\n", sum);
	printf("평균은 %.2lf\n", (double)sum / size);
	printf("-----------------------\n");
	//검색
	int no;
	char quit; //종료변수
	do {
		printf("점수가 보고싶은 학생번호?");
		scanf("%d", &no);
		getchar(); //엔터처리

		//잘못된 번호 처리
		if (no<1 || no>size) {
			printf("잘못된 번호입니다\n");
			continue; //계속진행
		}
		printf("%d번 학생의 점수는 %d\n",no, arr[no - 1]);
		printf("--------------------------\n");
		printf("종료(q) 계속 진행하려면(enter)\n");
		scanf("%c", &quit);
	} while (quit != 'q');
	








	return 0;
}