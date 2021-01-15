#include<stdio.h>
#include<string.h>

int main() {
	void sort(int arry[],int n);
	int a[10];
	printf("请输入是十个数：\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}
	sort(a, 10);
	printf("排序的结果是：\n");
	//puts(a);
	for (int i = 0; i < 10; i++) {
		printf("%d ",a[i]);
	}
}

void sort(int arry[], int n) {
	for (int i = 0; i < n; i++) {
		int min = arry[i];
		int k = i;
		for (int j = i; j < n; j++) {
			if (min > arry[j]) {
				min = arry[j];
				k = j;
			}
		}
		if (min != arry[i]) {
			arry[k] = arry[i];
			arry[i] = min;
		}
	}
}