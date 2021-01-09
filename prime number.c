#include<stdio.h>
#include<math.h>

int main() {
	//int i = 2;
	//int n = 100;
	int c;
	for (int n = 100; n < 201; n++) {
		int i = 2;
		while (i < sqrt(n)) {
			if (n % i == 0) {
				//printf("the number %d is not prime number\n",n);
				break;
			}
			else {
				i++;
			}
		}
		if(i<sqrt(n))
			printf("the number %d is not prime number\n", n);
		else
			printf("the number %d is prime number\n", n);
	}
	return 0;
}