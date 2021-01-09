#include<stdio.h>

int main() {
	char grade;
	printf("please enter your level:\n");
	scanf_s("%c",&grade);
	switch (grade) {
	case'A':
		printf("your grade is 85-100\n");
		break;
	case'B':
		printf("your grade is 70-84\n");
		break;
	case'C':
		printf("your grade is 60-69\n");
		break;
	case'D':
		printf("your grade is <60\n");
		break;
	default:
		printf("enter data is error.\n");
	}
	//printf("no");
	return 0;

}