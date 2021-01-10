#include<stdio.h>

int main() {
	double sum, i, n,m;
	sum = 0;
	i = 1;
	//n = 1;
	//m = 1;
	while (i <= 20) {
		n = 1;
		m = 1;
		while (n <= i) {
			m = m * n;
			n++;
		}
		sum = sum + m;
		i++;
		//printf("%d\n", sum);
	}
	printf("%lf\n", sum);
	printf("%22.15e\n",sum);
	return 0;
}