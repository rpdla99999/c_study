#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//do ~while
	//int a = -1;
	//do {
	//	printf("%d ", a);
	//} while (a>0); //�ּ� �ѹ��� ����

	//����ڿ��� �Է��� �޾Ƽ� y�̸� �����÷��� ���
	// 	   1)
	//char answer='y';
	//while (answer == 'y') {
	//	printf("������ �÷����ұ��?(y)?");
	//	scanf("%c", &answer);
	//	getchar(); //���Ͱ� ó��
	//	printf("�����÷���\n");
	//	
	//}

	//2)
	//char answer;
	//do {
	//	printf("�����÷���\n");
	//	printf("��� �ұ��?(y)?");
	//	scanf("%c", &answer);
	//	getchar(); //���Ͱ� ó��
	//} 	while (answer == 'y');

	//������ ��� �Է¹޾Ƽ� �հԸ� ���ϰ� 0�� �Է��ϸ� �հ��� �����ϴ����α׷�
	int a,sum=0;
	do {
		printf("������ �Է��ϼ���");
		scanf("%d", &a);
		sum += a;
	} while (a != 0);
	printf("�հԴ� %d\n", sum);



	return 0;
}