#include<stdio.h>

int main() {
	int max(int x,int y);
	int a[10];
	printf("������10������\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}
	printf("\n");
	int m = a[0];
	int n;
	for (int i = 1; i < 10; i++) {
		m = max(m, a[i]);
		n = i;
	}
	printf("�����ǣ�%d����λ�������%dλ\n",m,n+1);

}

int max(int x, int y) {
	return(x>y? x:y);
}