#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char* ptr1[4] = {"Korea", "Seoul", "Mapo", "152���� 2/3"};
	char* ptr2[4] = { "Korea", "Seoul", "Jongno", "152���� 2/3" };
	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptr2[i]);
	}
	return 0;
}