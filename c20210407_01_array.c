#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5
int main() {
	//�迭 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr,sizeof(arr));

	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1)*10;

	//}
	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	//�ǽ� 
	//double arr[3] = { 1.1,2.1,3.1 };
	//double arr[5];
	////�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double);
	//printf("������: %d\n", size);

	////�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}

	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < size; i++) {
	//	printf("%.1lf ", arr[i]);
	//}

	//������ �迭
	//char arr[] = { 'a','b','c','d','e','f' };
	//char size = sizeof(arr) / sizeof(char);
	//printf("������: %d\n", size); 
	//	for (int i = 0; i < size; i++){
	//		printf("%c ", arr[i]);
	//}
	
	//�迭���� ��
	//c�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�
	//const int a=5; //���: ������ �Ұ���
	//#define�� ���ǵ� ��ũ�λ��: �����ϵǱ� ���� ��ü
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//printf("������: %d\n", size);

	////�Է¹ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("[%d}�����Է�",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i],&arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ�:%d\n", sum);

	//�ǽ� �� �л��� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� ��ȣ ����� ��� �հ�/���/�˻�
	int arr[5],sum=0; 
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++) {
		printf("%d�� ����: \n", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("-----------------------\n");
	for (int i = 0; i < size; i++) {
		printf("%d���� %d��\n", i + 1, arr[i]);
		sum += arr[i];
	}
	printf("�հ�� %d��\n", sum);
	printf("����� %.2lf\n", (double)sum / size);
	printf("-----------------------\n");
	//�˻�
	int no;
	char quit; //���ắ��
	do {
		printf("������ ������� �л���ȣ?");
		scanf("%d", &no);
		getchar(); //����ó��

		//�߸��� ��ȣ ó��
		if (no<1 || no>size) {
			printf("�߸��� ��ȣ�Դϴ�\n");
			continue; //�������
		}
		printf("%d�� �л��� ������ %d\n",no, arr[no - 1]);
		printf("--------------------------\n");
		printf("����(q) ��� �����Ϸ���(enter)\n");
		scanf("%c", &quit);
	} while (quit != 'q');
	








	return 0;
}