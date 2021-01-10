#include<stdio.h>
#include<math.h>

int  main() {
	int a, b, c;
	for (int i = 100; i <= 999; i++) {
		a = i / 100;
		c = i % 10;
		b = (i % 100) / 10;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
			printf("%dÊÇË®ÏÉÊý\n",i);
	}
	return 0;
}