#include<stdio.h>

void move(int* p, int m,int n);
int main() {
	int number[20];
	int n, m;
	int* p = number;
	printf("please enter n:\n");
	scanf("%d",&n);
	printf("please enter %d numbers:\n", n);
	for (int i = 0; i < n; i++) {
		printf("请输入第%d个数字：\n", i + 1);
		scanf("%d",p+i);
	}
	
	printf("\n数组为：\n");
	for (int i = 0; i < n; i++) {
		printf("%d ",*(p+i));
		}
	printf("\nplease enter m:\n");
	scanf("%d",&m);
	move(p,m,n);
	printf("\n移动过后数组为：\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", *(p + i));
	}
}

void move(int* p, int m,int n) {
	//int* p2 = p + n - m;
	int a[20];
	int* p2 = a;
	for (int i = 0; i < m;  i++) {
		*(p2+i) = *(p + n - m + i);
	}
	for (int i = n - m - 1; p + i >= p; i--) {
		*(p + i+m) = *(p + i);
	}
	for (int i = 0; i < m; i++) {
		*(p + i) = *(p2+i);
	}
}