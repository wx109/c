#include<stdio.h>

int main() {
	int a[3][4] = { {1,2,3,4} ,{9,8,7,6}, {-10,10,-5,2} };
	int max = a[0][0];
	int row = 0,colum = 0;//row,colum分别表示行号，列号.
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				row = i+1;
				colum = j+1;
			}
		}
	}
	printf("矩阵中最大的数是：%d\n其行号为：%d\n列号为：%d\n",max,row,colum);

}