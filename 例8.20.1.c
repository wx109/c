#include<stdio.h>

void copy(char from[], char to[]);
int main() {
	char a[] = "I am a teacher.";
	char b[] = "You are a student.";
	printf("string a is %s\nstring b is %s\n",a,b);
	copy(a, b);
	printf("after copy\n");
	printf("string a is %s\nstring b is %s\n", a, b);
}

void copy(char from[], char to[]) {
	int i;
	for (i = 0; from[i] != '\0'; i++)
		to[i] = from[i];
	to[i] = '\0';
}