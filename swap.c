#include<stdio.h>

void swap(int* p1, int* p2);
int main() {
	int* p1, * p2;
	int a, b;
	printf("please enter a and b:\n");
	scanf("%d %d",&a,&b);
	p1 = &a;
	p2 = &b;
	printf("a=%d,b=%d\n",a,b);
	if (a > b)
		swap(p1, p2);
	printf("a=%d,b=%d\n", a, b);
}
void swap(int* p1, int* p2) {
	int temp;
	temp =* p1;
	* p1 =* p2;
	* p2 =temp;
}
