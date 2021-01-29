#include<stdio.h>

void output(int *p);
void shift(int* p);
int main() {
	int a[10];
	int* p = a;
	printf("please enter 10 numbers:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d",p+i);
	}
	//output(p);
	shift(p);
	printf("经过转化后的数列为：\n");
	output(p);
}
void output(int* p) {
	for (int i = 0; i < 10; i++) {
		printf("%d ",*(p+i));
	}
}
void shift(int* p) {
	for (int i = 0; i < 10 / 2 - 1; i++) {
		//printf("*(p+i)=%d\n", *(p + i));
		int temp;
		temp = *(p + i);
		*(p + i) = *(p + 10 - 1 - i);
		*(p + 10 - 1 - i) = temp;
		//printf("temp=%d\n",temp);
		//printf("*(p+i)=%d\n", *(p + i));
		//printf("\n");
	}
}
	
	