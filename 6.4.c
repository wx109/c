#include<stdio.h>

int main() {
	int a[10] = { 1,2,3,4,5,7,8,9,10,11 };
	int b[11];
	int m;
	printf("请输入将要插入的值:\n");
	scanf_s("%d",&m);
	for (int i = 0; i <= 9; i++) {
		/*if (i == 0 && m < a[i]) {
			b[i] = m;
			for (int i = 0; i <= 9; i++) {
				b[i + 1] = a[i];
			}
		}
		else if (i == 9 && m > a[i]) {
			b[i + 1] = m;
			for (int i = 0; i <= 9; i++) {
				b[i] = a[i];
			}
		}
		else if (m > a[i] && a[i + 1]) {
			b[i + 1] = m;
		}*/

		if (a[i] <=m) {
			if (i != 9)
				b[i] = a[i];
			else {
				b[i] = a[i];
				b[i + 1] = m;
			}
		}
		if (a[i] > m) {
			for (int j = i+1; j <= 10; j++) {
				b[j] = a[j-1];
			}
			b[i] = m;
			break;
		}
	}
	printf("插入后的数组为：\n");
	for (int i = 0; i <= 10; i++) {
		printf("%d ",b[i]);
	}
}