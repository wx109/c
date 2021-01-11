#include<stdio.h>
#include<math.h>

int main() {
	int i, j, a[101];
	for (i = 1; i <= 100; i++)
		a[i] = i;
	for (i = 2; i <= sqrt(100); i++) {
		for (j = i + 1; j <= 100; j++) {
			if (j % i == 0)
				a[j] = 0;
		}
	}
	for (i = 1; i <= 100; i++)
		if (a[i] != 0)
			printf("%d\n", a[i]);
}