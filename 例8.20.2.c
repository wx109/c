#include<stdio.h>

void copy(char from[], char to[]);
int main() {
	char a[] = "I am a teacher.";
	char b[] = "You are a student.";
	char* p1=a, * p2=b;
	printf("string a is %s\nstring b is %s\n", p1, p2);
	copy(p1, p2);
	printf("after copy\n");
	printf("string a is %s\nstring b is %s\n", p1, p2);
}

void copy(char from[], char to[]) {
	int i;
	for (i = 0; from[i] != '\0'; i++)
		to[i] = from[i];
	to[i] = '\0';
}