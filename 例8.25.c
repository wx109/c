#include<stdio.h>


float* search(float(*pointer)[4], int n);
int main() {
	float socer[][4] = { {60,70,80,90}, {56,89,67,88},{34,78,90,66} };
	float* p;
	int i, k;
	printf("please enter the student's number:\n");
	scanf("%d",&k);
	printf("the socer of NO.%d are:",k);
	p = search(socer, k);
	for (i = 0; i < 4; i++) {
		printf("%5.2f\t",*(p+i));
	}
	printf("\n");

}

float* search(float(*pointer)[4], int n) {
	int* p;
	p = *(pointer + n);
	return p;
}