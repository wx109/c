#include<stdio.h>
#include<string.h>

int main() {
	char a[100];
	char* p = a;
	printf("please enter the string:\n");
	gets(a);
	int count=0;
	for (int i = 0; *(p + i) != '\0'; i++) {
		count++;
	}
	printf("the string's length is %d",count);
}