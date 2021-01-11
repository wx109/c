#include<stdio.h>

int main() {
	int a[11],m;
	for (int i = 1; i <= 10; i++) {
		printf("ÇëÊäÈëa[%d]µÄÖµ:\n",i);
		scanf_s("%d",&a[i]);
	}
	for (int i = 1; i <= 9; i++) {
		int min = a[i+1];
		m = i + 1;
		for (int j = i + 2; j <= 10; j++) {
			//int min = a[i+1];
			if (min > a[j]) {
				min = a[j];
				m = j;
			}
		}
		if (a[i] > min) {
			a[m] = a[i];
			a[i] = min;
			//printf("%d %d %d\n",a[i],a[m],m);
		}
		//printf("%d %d %d\n", a[i], a[m], m);
		for (int i = 1; i <= 10; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	for (int i = 1; i <= 10; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}