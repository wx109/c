#include<stdio.h>
#include<math.h>
int main() {
	int sum=0, t=1, n;
	printf("ÇëÊäÈënµÄÖµ£º\n");
	scanf_s("%d",&n);
	for (int i = 1; i <= n; i++) {
		sum = sum + t;
		t = t + pow(10, i);
	}
	printf("%d",sum);
}