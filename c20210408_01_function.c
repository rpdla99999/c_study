#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű�����:����, ��ȯ��:����
void voidTest() {
	printf("void�Լ�\n");
}
//�Ű�����:�Ѱ�, ��ȯ��:����
void voidTest2(int a) {
	printf("�Ű�����:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("�μ��� ��:%d\n", a + b);
}

//�Ű�����:������
//���ǳ��̸� ������ִ� ���
//call by value���
void area(double r2) { //��������: �Լ������ ����, �Լ������ �Ҹ�
	printf("���ǳ���: %.2lf\n", r2 * r2 * 3.14);
}

//�Ű�����: ������(double)
//��ȯ��:����(double)
//���ǳ��̸� ���ؼ� ��ȯ�ϴ� �Լ�
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //��ȯ���� �Ѱ�
}

//�� ������ �Ű������� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�
int intReturn(int i,int j,int k) {
	int sum = i + j + k;
	return sum;
}

//�ΰ��� ������ �Ű������� �޾Ƽ� �����Ǽ����� ��ȯ�ϴ� �Լ�
double xx(int a, int b) {
	return((double)a / b);
}

//�μ��� �Ű������� �޾Ƽ� �μ��� ū���� ��ȯ�ϴ� �Լ�
int bigReturn(int a, int b) {
	int m;
	if (a > b)
		m = a; //return�� �Լ�������
	else if (a < b)
		m = b;
	else
		m = 0;
		
}

//�������Լ�
int main() {
	//�Լ�
	//voidTest();
	 
	//voidTest2(10);
	//
	//voidTest3(20, 30);
	//
	//double r; //��������
	//printf("������: ");
	//scanf("%lf", &r);
	//area(r);
	//
	//double r = 5.6;
	//double rValue=areaReturn(r);
	//printf("���ǳ���: %.2lf\n", rValue);
	//
	//int i = 10, j = 20, k = 30;
	//int rSum = intReturn(i, j, k);
	//printf("�հ�:%d\n", rSum);
	//
	//printf("������:%lf\n",xx(5, 3));
	//int m = bigReturn(20, 20);
	//if (m != 0)
	//	printf("ū���� %d\n", m);
	//else
	//	printf("�μ��� ����\n");
	


	return 0;
}