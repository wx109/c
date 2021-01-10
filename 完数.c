#include<stdio.h>

int main() {
	for (int i = 1; i <= 1000; i++) {
		int t = 0;
		for (int j = 1; j <= i-1; j++) {
			if (i % j == 0) {
				t = t + j;
				//printf("%d\n", t);
			}
		}
		if (t == i)
			printf("%d ÊÇÍêÊý\n", i);
	}
}