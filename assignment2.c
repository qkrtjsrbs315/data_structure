#include<stdio.h>
#include<string.h>

int main(void) {

	char alpha[100] = "";


	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", alpha);

	printf("�Էµ� ���ڿ��� \"%s\"\n�Դϴ�.",alpha);
	printf("\n\n�Էµ� ���ڿ��� ���� = %d", strlen(alpha));


	return 0;
}