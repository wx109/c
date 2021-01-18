#include<stdio.h>
#include<string.h>

void change(char str[]);
int main() {
	char str1[80];
	printf("please enter 4 numbers:\n");
	gets(str1);
	change(str1);
	puts(str1);
}

void change(char str[]) {
	for (int i = strlen(str); i > 0; i--) {
		printf("%d\n",i);
		str[2 * i] = str[i];
		str[2 * i - 1] = ' ';
	}
}