#include<stdio.h>

int main() {
	//int n;
	//printf("请输入n的值(n>2)：\n");//不存在2*2的魔方阵
	//scanf("%d",&n);
	//int sum = (1 + n * n) * n / 2;
	//int a[n-1][n-1];
	int a[15][15];
	int i, j, k, p, n;
	p = 1;
	while (p == 1) {
		printf("请输入一个奇数n（1~15）：\n");
		scanf_s("%d",&n);
		if ((n % 2 != 0) && (n <= 15) && (n != 0))
			p = 0;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			a[i][j] = 0;
		}
	}
	k = 2;
	int m = 1,q=(n+1)/2;
	/*do
	{
		//if ((m == 1 && q == n) || a[m][q] != 0)
			//a[m + 2][q-1] = k;
		if (a[m][q] == 0) {
			if (m > 0 && m <= n && q > 0 && q < n)
				a[m][q] = k;
			else if (m <= 0 && q > 0 && q < n) {
				m = n;
				a[m][q] = k;
			}
			else if (m > 0 && m <= n && q == n) {
				q = 1;
				a[m][q] = k;
			}
			else if (m == 1 && q == n)
				a[m + 2][q - 1] = k;
		}
		else
			a[m + 2][q - 1] = k;
		m--;
		q++;
		k++;
	} while (k<=n*n);*/

	a[m][q] = 1;
	while (k <= n * n) {
		m--;
		q++;
		if (m > 0 && m <= n && q > 0 && q <= n) {
			if (a[m][q] == 0)
				a[m][q] = k;
			else {
				m = m + 2;
				q = q - 1;
				a[m][q] = k;
			}
		}
		else if (m == 0 && q > 0 && q <= n) {
			m = n;
			if (a[m][q] == 0)
				a[m][q] = k;
			else {
				m = m + 2;
				q = q - 1;
				a[m][q] = k;
			}
		}
		else if (m > 0 && m <= n && q == n + 1) {
			q = 1;
			if (a[m][q] == 0)
				a[m][q] = k;
			else {
				m = m + 2;
				q = q - 1;
				a[m][q] = k;
			}
		}
		else if (m == 0 && q == n + 1) {
			m = m + 2;
			q = q - 1;
			a[m][q] = k;
		
		}
		k++;

	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}


}