#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ڿ��� ������
	//char str[] = "happy";
	////str = "angry"; //str�� ��� ����Ұ�
	//char *p = str;
	//printf("%s\n",p);

	//p = "python";
	//puts(p);  //���ڿ� �����Լ�

	//�ǽ�) �̸��Է��� ���
	//�����͸� �̿�

	//1))
	//char name[256];
	//printf("�̸��� �Է��ϼ���\n");
	//scanf("%s", &name);
	//char* p = name;
	//printf("%s\n", p);

	//2))
	char name[20];
	char* p = name;
	while (1) {
		printf("�̸�: ");
		gets_s(name, sizeof(name));
		if (name[0] == 'q') break;
		//puts(p);
		//printf("�� ȯ���մϴ�.\n");
		printf("%s�� ȯ���մϴ�.\n",p);
	}
	
	
	

	return 0;
}