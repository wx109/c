#include<stdio.h>


void buddlesort(int a[]);
int main() {
	int a[10];
	printf("please enter 10 numbers:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}
	printf("输入的数组为\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	buddlesort(a);
	printf("排序后的数组为：\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ",a[i]);
	}
}

void buddlesort(int a[]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			//for (int i = 0; i < 10; i++) {
			//	printf("%d ", a[i]);
			//}
			//printf("\n");
		}
	}
}