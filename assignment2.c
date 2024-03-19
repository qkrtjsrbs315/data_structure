#include<stdio.h>
#include<string.h>

int main(void) {

	char alpha[100] = "";


	printf("문자열을 입력하세요 : ");
	scanf("%s", alpha);

	printf("입력된 문자열은 \"%s\"\n입니다.",alpha);
	printf("\n\n입력된 문자열의 길이 = %d", strlen(alpha));


	return 0;
}