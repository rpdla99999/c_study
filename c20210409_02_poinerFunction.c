#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ�: call by reference
//�ּҸ� �Ű������� �޴´�
//main�Լ��� a�� ���� ���氡��
void change(int *p) {
	*p = 20;
}
//�μ��ٲٱ�
void twoChange(int* pa,int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
//�հ豸�ϱ�
void sumCal(int *pa,int *psum) {
	*psum += *pa;
}
int main() {
	//�Լ��� ������ �ѱ��
	//int a=10;
	//change(&a);
	//scanf("%d", &a);
	//printf("a:%d\n", a);
	
	//�μ��ٲٱ�
	//int a = 10, b = 20;
	//twoChange(&a, &b);
	//printf("%d %d\n", a, b);


	//�ݺ����� �̿��ؼ� �Է¹������� �Լ����� ����
	int a, sum = 0;
	while (1) {
		printf("������ �Է��Ͻÿ�");
		scanf("%d",&a);
		if (a == 0) break;
		sumCal(&a,&sum);
	}
	printf("�����հ�: %d\n", sum);
}