#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char string[64];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", string);
	printf("\n\
�Էµ� ���ڿ���\n\
\"%s\"\n\
�Դϴ�.\n\n\
�Էµ� ���ڿ��� ���� = %d\n\
", string, strlen(string));
	return 0;
}