#include<stdio.h>
#include<string.h>

void shift(char str[80]);
int main() {
	char str1[80];
	printf("please input a string:\n");
	scanf("%s",str1);
	shift(str1);
	printf("after shift,the string is:\n");
	puts(str1);
}

void shift(char str[80]) {
	for (int i = 0; i < strlen(str) / 2; i++) {
		char temp;
		temp = str[i];
		str[i] = str[strlen(str) - i-1];
		str[strlen(str) - i-1] = temp;
	}
}