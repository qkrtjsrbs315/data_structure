#include <stdio.h>

void hanoi(int n, char start, char work, char target) {
	int isBaseCase = (n == 1) ? 1 : 0;
	if (!isBaseCase) hanoi(n - 1, start, target, work);
	printf("%c���� ���� %d��(��) %c�� �ű�\n", start, n, target);
	if (!isBaseCase) hanoi(n - 1, work, start, target);
}

int main() {
	hanoi(3, 'A', 'B', 'C');

	return 0;
}