#include<stdio.h>

int main() {
	int f1, f2, f3;
	f1 = 1;
	f2 = 1;
	printf("%d\n%d\n", f1, f2);
	for (int i = 1; i <= 38; i++) {
		f3 = f1 + f2;
		printf("%d\n",f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;
}