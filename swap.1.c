#include<stdio.h>

void sort(int *p1,int *p2,int *p3);
void swap(int *p1,int *p2);
int main() {
	int a, b, c;
	int* p1, * p2,* p3;
	printf("please enter a b c:\n");
	scanf("%d %d %d",&a,&b,&c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	sort(p1, p2, p3);
	printf("从小到大的顺序为：%d %d %d\n", a, b, c);
}

void sort(int* p1, int* p2, int* p3) {
	if (*p1 > *p2)
		swap(p1, p2);
	if (*p2 > * p3)
		swap(p2, p3);
	if (*p1 > * p2)
		swap(p1, p2);
}
void swap(int* p1, int* p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}