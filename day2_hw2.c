#include <stdio.h>

int main() {
	char array3D[2][3][32];
	for (int i = 0; i < 2; i++) {
		printf("�л�%d�� �̸� : ", i+1);
		scanf(" %[^\n]s", array3D[i][0]);
		printf("�л�%d�� �а� : ", i+1);
		scanf(" %[^\n]s", array3D[i][1]);
		printf("�л�%d�� �й� : ", i+1);
		scanf(" %[^\n]s", array3D[i][2]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		printf("\n\
�л�%d\n\
\t%s\n\
\t%s\n\
\t%s\n\
", i+1, array3D[i][0], array3D[i][1], array3D[i][2]);
	}

	return 0;
}