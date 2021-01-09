#include<stdio.h>
#include<math.h>

int main() {
	int sign = 1;
	double PI,t,n;
	t = 1;
	n = 1;
	PI = 0;
	while (fabs(t) >= 1e-6) {
		PI = PI + t;
		sign = -sign;
		n = n + 2;
		t = sign / n;
	}
	PI = 4 * PI;
	printf("%10.8f\n",PI);
}