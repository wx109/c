#include<stdio.h>
#include<math.h>
int select(int a);

int main() {
	int a,b;
	printf("please enter a number:");
	scanf("%d",&a);
	b=select(a);
	if (b)
		printf("%d������",a);
	else
		printf("%d��������", a);

}

int select(int a) {
	int m = sqrt(a);
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0)
			return 1;
	}
	return 0;
}