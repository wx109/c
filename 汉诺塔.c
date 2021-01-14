#include<stdio.h>

int main() {
	void hanoi(int n,char one,char two,char three);
	printf("��������Ҫ�ᶯ�Ĳ�����\n");
	int a;
	scanf("%d",&a);
	hanoi(a,'A','B','C');
}


void hanoi(int n, char one, char two, char three) {
	void move(char x, char y);
	if (n == 1)
		move(one, three);
	else {
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

void move(char x, char y) {
	printf("%c-->%c\n",x,y);
}