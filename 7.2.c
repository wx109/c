#include<stdio.h>
#include<math.h>

void fsolu(int a, int b, int c);
void ssolu(int a, int b, int c);
void tsolu(int a, int b, int c);

int main() {
	int a, b, c;
	printf("please enter a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	if (b * b - 4 * a * c > 0)
		fsolu(a, b, c);
	else if (b * b - 4 * a * c == 0)
		ssolu(a, b, c);
	else if (b * b - 4 * a * c < 0)
		tsolu(a, b, c);
}

void fsolu(int a, int b, int c) {
	double x1, x2, m;
	m = b * b - 4 * a * c;
	x1 = (-b + sqrt(m)) / (2 * a);
	x2 = (-b - sqrt(m)) / (2 * a);
	printf("该方程有两个解，分别为x1：%lf,x2：%lf",x1,x2);
}


void ssolu(int a, int b, int c) {
	double x1;
	x1 = -b / (2 * a);
	printf("该方程有唯一解，x1:%lf",x1);
}


void tsolu(int a, int b, int c) {
	double  m, n,q;
	n = -b / (2 * a);
	m = b * b - 4 * a * c;
	q = sqrt(fabs(m))/(2*a);
	printf("该方程无实数根\n其解x1的\n实部为：%lf虚部为：%lf\nx2的\n实部为：%lf虚部为：%lf",n,q,n,-q);
}