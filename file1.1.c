#include<stdio.h>
#include<string.h>

extern void enter_string(char str[]);
extern void del_string(char str[], char ch);
extern void print_string(char str[]);

int main() {
	//extern void enter_string(char str[]);
	//extern void del_string(char str[],char ch);
	//extern void print_string(char str[]);
	//printf("\n");
	char str1[80];
	enter_string(str1);
	//char c = 'q';
	char c;
	//c = ' ';
	printf("please enter the factor:\n");
	scanf("%c",&c);

	del_string(str1,c);
	print_string(str1);
	return 0;

}