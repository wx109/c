#include<stdio.h>
int main() {
	char ch;
	printf("please enter a char:\n");
	scanf_s("%c",&ch);
	printf("%d\n", ch);
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
	printf("%d\n", ch);
	printf("the char is:%c",ch);
	return 0;
}