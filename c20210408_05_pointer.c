#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�����ͺ���
	//int a = 10;
	//int *p = &a;
	//printf("a:%d %p\n", a, &a);
	//printf("a:%p %d\n", p,*p);

	//char c = '%';
	//char *p2 = &c;
	//printf("c:%c  *p2:%c\n",c, * p2);
	//printf("c:%p\n", p2);

	//double d = 3.14;
	//double *p3 = &d;
	//printf("d:%.2lf %p\n", d, &d);
	//printf("d: %p %.2lf\n", p3, *p3);

	//float f = 5.55;
	//float *p4 = &f;
	//printf("f:%.2f\n", *p4);

	//�ǽ�
	//int a = 10, b = 20;
	//int* p;
	//p = &a;
	//printf("a:%d\n", *p);
	//p = &b;
	//printf("b:%d\n", *p);

	//�ǽ� ����Ʈ������ ����ؼ� a,b,c�� base�� ���غ��ÿ�
	//int a = 10, b = 20, c = 30, base = 100;
	//int* p = &a;
	//*p += base;
	//printf("a:%d\n", *p);
	//p = &b;
	//*p += base;
	//printf("b:%d\n", *p);
	//p = &c;
	//*p += base;
	//printf("c:%d\n", *p);

	//�迭�� ������
	//int arr[3] = { 10,20,30 };
	//int *p = arr;
	////for (int i = 0; i < 3; i++) {
	////	printf("%d %d %d %d\n", *(p+i),*(arr+i),arr[i],p[i]);
	////}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", *p++);
		//p++;
		//arr++; //�Ұ�
	//}

	//�ǽ� ������ �迭�� 'p''y''t''h''o''n' �����ϰ� �����ͺ����� �ѱ��ھ� ���
	//char c[6] = { 'p','y','t','h','o','n' };
	//char* p = c;
	//	for (int i = 0; i < 6; i++) {
	//	printf("%c\n", *p++);
	//}

	//�Ǻ���ġ ������ �����ͷ� ���ϰ� ���
	//int fibo[20];
	//int* p = fibo;
	//*p = 0; p++;
	//*p = 1; p++;
	//for (int i = 2; i < 20; i++) {
	//	*p = *(p - 2) + *(p - 1);
	//	p++;
	//}
	//p = fibo; //ó�� ��ġ��
	//for (int i = 0; i < 20; i++) {
	//	printf("%d ", *p);
	//	p++;
	//}



	return 0;
}