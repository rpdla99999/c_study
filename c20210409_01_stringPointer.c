#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//문자열의 포인터
	//char str[] = "happy";
	////str = "angry"; //str은 상수 변경불가
	//char *p = str;
	//printf("%s\n",p);

	//p = "python";
	//puts(p);  //문자열 전용함수

	//실습) 이름입력후 출력
	//포인터를 이용

	//1))
	//char name[256];
	//printf("이름을 입력하세요\n");
	//scanf("%s", &name);
	//char* p = name;
	//printf("%s\n", p);

	//2))
	char name[20];
	char* p = name;
	while (1) {
		printf("이름: ");
		gets_s(name, sizeof(name));
		if (name[0] == 'q') break;
		//puts(p);
		//printf("님 환영합니다.\n");
		printf("%s님 환영합니다.\n",p);
	}
	
	
	

	return 0;
}