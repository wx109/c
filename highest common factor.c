#include<stdio.h>

int main(){
	int m;
	int n;
	int min;
	int max;
	int i=1;
	int c=1;
	printf("please enter two numbers:\n");
	scanf_s("%d %d",&m,&n);
	if (m < n) {
		min = m;
		max = n;
	}
	else
	{
		min = n;
		max = m;
	}
	while (i < min+1) {
		if (m % i == 0 && n % i == 0)
		{
			c = i;
			//printf("%d", c);
			i++;
		}
		else
			i++;
	}
	printf("the %d is %d and %d 's highest common factor", c, m, n);
	return 0;

}