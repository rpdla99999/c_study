#include <stdio.h>

int main() {
	//������ �������� ����
	//int a; 
	//�ʱ�ȭ
	//a = 20;
	//printf("%d\n",a);

	//�Ǽ��� ������ ����
	//float f; //4byte
	//double d; //8byte
	//f = 3.141215242124542124521; //�ʱ�ȭ
	//d = 3.141215242124542124521; //�ʱ�ȭ
	//printf("%.15f\n",f);
	//printf("%.15f\n", d);

	//������
	//����� ���ÿ� �ʱ�ȭ
	//char c = 'A';
	//printf("���ڴ� %c  %d\n", c, c);

	//���������� ����Ʈ��
	//int a = 100;
	//printf("������: %d\n", sizeof(a));
	//float f = 3.14;
	//double d = 3.14;
	//printf("float��: %d\n", sizeof(f));
	//printf("double��: %d\n", sizeof(d));
	//char c = 'a';
	//printf("char��: %d\n", sizeof(c));

	//���ڿ�
	//�迭�� �̸��� �ּҸ� ������ �ִ�:���
	//�迭�� ũ��� ���ڿ��� ũ�� +1
	//����� ���ÿ� �ʱ�ȭ �ÿ��� �迭�� ũ�� ��������
	char c[]="hello"; //nul���ڰ� �������� �߰��� �ȴ�
	//c = "hello"; //����⶧���� �Ұ�

	printf("���ڿ�:%s  ũ��:%d\n",c, sizeof(c));
	printf("5�� : %c\n", c[5]);






	return 0;

}
