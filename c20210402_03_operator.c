#include <stdio.h>

int main() {
	//������(+,-,*,/,%)
	//������ ����=>����
	//�Ǽ��� ����=>�Ǽ�
	//int a = 20, b = 3; 
	//printf("%d + %d = %d\n",a,b,a+b);
	//printf("%d - %d = %d\n",a,b,a-b);
	//printf("%d * %d = %d\n",a,b,a*b);
	//printf("%d / %d = %f\n",a,b, (double)a/b);
	//printf("%d %% %d = %d\n", a, b, a % b);

	//�ǽ�)
	//int a = 50, b = 3;
	//printf("��:%d\n", a/b);
	//printf("������:%d\n", a % b);
	//printf("�Ǽ���:%f\n", (double)a/b);

	//���׿�����
	//++, --
	//�տ����̸� ����, �ڿ� ���̸� ����
	//int a = 10;
	//a++;//a += 1;//a = a + 1;
	//printf("%d\n", a);
	//a--;//a -= 1;//a = a - 1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n", a++); //����� �ϰ� �����ض�
	//printf("%d\n", a);
	//printf("%d\n", ++a);  //�����ϰ� ����ض�

	//�ǽ�)
	//int a = 10;
	//a--;
	//printf("%d\n", --a);
	//printf("%d\n", a++);
	//printf("%d\n", a--);
	//printf("%d\n", a);

	//�ǽ�)
	//int a = 10;
	//int b = --a; // a=a-1; b=a;
	//int c = b++; //c=b ; b=b+1;
	//b = ++a;     // a=a+1; b=a;

	//printf("%d %d %d\n", a, b, c);

	//���迬����
	//int a = 10, b = 20;
	//printf("%d\n", a < b);//1 , true
	//printf("%d\n", a > b);//0 , false
	//printf("%d\n", a == b);//0 , false
	//printf("%d\n", a != b);//1 , true

	//��������:&&, ||, !
	//int a = 10, b = 20;
	//printf("%d\n", a>0 && b>0 );
	//printf("%d\n", a > 0 && b < 0);
	//printf("%d\n", a > 0 || b < 0);
	//printf("%d\n", !(a>0));

	//��Ʈ������:&,|, ~,^
	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);
	//����Ʈ ������
	//printf("%d\n", 4>>2); //���������� 2��Ʈ �б�
	//printf("%d\n", 4<<1); //�������� 1��Ʈ �б�

	//���׿�����
	//int a = -10;
	//a > 0 ?printf("���") : printf("����");

	//�μ��� ū���� ���
	//int a = 10, b = 20;
	//a>b? printf("%d\n",a):printf("%d\n", b);

	//int c = a > b ? a : b;
	//printf("%d\n", c);

	//
	//int a = 20, b = 10, c = 30;
	////int max = a> b ? a : b;
	////max = max > c ? max : c;
	////printf("%d\n", max);

	//int max = a > b ? (a>c?a:c) : (b>c?b:c);
	//printf("%d\n", max);

	//�ǽ�)¦/Ȧ�� �Ǻ�
	//int a = 6;
	//a % 2 == 0 ? printf("%d�� ¦��\n",a) : printf("%d�� Ȧ��\n",a);

	//�����ͺ����� �̿��ؼ� ���
	//char* p = a % 2 == 0 ? "¦��" : "Ȧ��";
	//printf("%d�� %s\n", a, p);



	return 0;


}