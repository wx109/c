#include<stdio.h>

void sort(int* p1, int* p2);
int main() {
	int a, b, c;
	printf("please enter a,b and c:\n");
	scanf("%d %d %d",&a,&b,&c);
	int* p1 = &a, * p2 = &b, * p3 = &c;
	sort(p1, p2);
	sort(p2, p3);
	sort(p1, p2);
	printf("%d %d %d",*p1,*p2,*p3);
}

void sort(int* p1, int* p2) {
	if (*p1 > * p2) {
		int temp;
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}

}