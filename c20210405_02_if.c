#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>_

int main() {
	//if(���ǹ�) :���ǽ��� ���϶� �����ҹ���
	//int a = 0;
	//if (a > 0) {
	//	printf("���\n");
	//}
	//else {
	//	//��øif��
	//	if (a < 0) {
	//		printf("����\n"); \
	//	}
	//	else {
	//		printf("����� ������ �ƴմϴ�.\n");
	//	}
	//}
	
	//ǥ���� �����ϰ�
	//int a = 0;
	//if (a > 0)
	//	printf("���\n");
	//else if (a < 0)
	//	printf("����\n"); 
	//else 
	//	printf("����� ������ �ƴմϴ�.\n");

	//�ǽ�) �� ������ �Է¹޾� ū���� ���(�μ��� �������� �ִ�)
	//int a, b;
	//printf("�μ��� �Է��Ͻÿ�");
	//scanf("%d%d", &a, &b);
	//if (a > b)
	//	printf("%d\n", a);
	//else if (a < b)
	//	printf("%d\n", b);
	//else
	//	printf("�μ��� ����\n");

	//�ǽ�) ������ �Է¹޾� ������ ���
	//int score;
	//printf("������ �Է�");
	//scanf("%d", &score);
	//if (score > 100)
	//	printf("������ �ٽ� �Է��ϼ���\n");
	//else if (score < 0)
	//	printf("������ �ٽ� �Է��ϼ���\n");
	//else if (score >= 90)
	//	printf("A����\n");
	//else if (score >= 80)
	//	printf("B����\n");
	//else if (score >= 70)
	//	printf("C����\n");
	//else if (score >= 60)
	//	printf("D����\n");
	//else
	//	printf("F����\n");

	//�ǽ�) ��,��,�� ������ �Է¹޾� ������ ������ �� 60���̸��� �Ѱ����̶� ������ ����
	//int kor, eng, math;
	//printf("��,��,�� ������ �Է��Ͻÿ�\n");
	//scanf("%d%d%d", &kor, &eng, &math);
	//if (kor < 60 || eng < 60 || math < 60) {
	//	printf("����\n");
	//}
	//else {
	//	int sum = kor + eng + math;
	//	double avg = sum / 3.;
	//	printf("�հ�:%d\n", sum);
	//	printf("���:%.2f\n", avg);
	//}
	//printf("������? %d\n", kor + eng + math);
	//printf("�����? %.2f\n", ((double)kor + eng + math) / 3);

	//if (kor < 60)
	//	printf("�������� �̸����� ����\n");
	//else if (eng < 60)
	//	printf("�������� �̸����� ����\n");
	//else if (math < 60)
	//	printf("�������� �̸����� ����\n");
	
	//�ǽ� ������ �Է��ϰ� ���� ����
	//int year;
	//printf("�⵵�� �Է��ϼ���\n");
	//scanf("%d", &year);
	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	//	printf("�����Դϴ�\n");
	//}
	//else {
	//	printf("������ �ƴմϴ�\n");
	//}

	//�ǽ� �޴��� ���� ������ �����ϸ� ������ �ڳʸ� �˷��ֽÿ�
	int no;
	printf("�޴��� ����ּ���\n");
	printf("----------------------------------------------------\n");
	printf("1.����� 2.«�� 3.������ 4.����� 5.���� 6.���İ�Ƽ");
	scanf("%d", &no);
	//if (no == 1 || no == 2) {
	//	printf("�߽��ڳʷ� ������\n");
	//}
	//else if (no == 3 || no == 4) {
	//	printf("�ѽ��ڳʷ� ������\n");
	//	}
	//else if (no == 5 || no == 6) {
	//	printf("����ڳʷ� ������\n");
	//}
	//else {
	//	printf("�߸��� �޴�\n");
	//}
	switch (no) {
	case 1: case 2:
		printf("�߽��ڳ�\n"); break;
	case 3: case 4:
		printf("�ѽ��ڳ�\n"); break;
	case 5: case 6:
		printf("����ڳ�\n"); break;
	default:
		printf("�߸��� �޴�\n");

	}


	return 0;
}