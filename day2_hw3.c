#include <stdio.h>

int main() {
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("\n\n%d�� ���丮�� ���� %d�Դϴ�.", num, fact(num));
	
	return 0;
}

int fact(int n) {
	int result;
	printf("\nfact(%d) �Լ� ȣ��!", n);
	result = (n == 1) ? 1 : fact(n - 1) * n;
	printf("\nfact(%d) �� %d ��ȯ!", n, result);
	return result;
}