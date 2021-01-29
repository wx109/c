#include<stdio.h>
void output(int a[5][5]);
void shift(int *p);
int main() {
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("please enter a[%d][%d]:",i,j);
			scanf("%d",*(a+i)+j);
		}
	}
	int* p = a;
	//output(a);
	shift(p);
	printf("\n×ª»»ºó£º\n");
	output(a);

}
void output(int a[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void shift(int* p) {
	int max = *p;
	int k=0;
	for (int i = 1; i < 25; i++) {
		if (max < *(p + i)) {
			max = *(p + i);
			k = i;
		}
	}
	if (k != 12){
		int temp;
		temp = *(p + 12);
		*(p + 12) = *(p + k);
		*(p + k) = temp;
	}
	int min[4],loc[4];
	for (int i = 0; i < 4; i++) {
		min[i] = *p;
		loc[i] = 0;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 25; j++) {
			if (min[i] > * (p + j)&&i==0) {
				min[i] = *(p + j);
				loc[i] = j;
			}
			else if (min[i] > * (p + j) && *(p+j)>=min[i-1]&&j!=loc[i-1]) {
				min[i] = *(p + j);
				loc[i] = j;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			int temp;
			temp = *(p + 0);
			*(p + 0) = *(p + loc[i]);
			*(p + loc[i]) = temp;
		}
		else if (i == 1) {
			int temp;
			temp = *(p + 4);
			*(p + 4) = *(p + loc[i]);
			*(p + loc[i]) = temp;
		}
		else if (i == 2) {
			int temp;
			temp = *(p + 20);
			*(p + 20) = *(p + loc[i]);
			*(p + loc[i]) = temp;
		}
		else if (i == 3) {
			int temp;
			temp = *(p + 24);
			*(p + 24) = *(p + loc[i]);
			*(p + loc[i]) = temp;
		}
	}
	for (int i = 0; i < 4; i++) {
		printf("min[i]=%d,loc[i]=%d\n", min[i], loc[i]);
	}

}