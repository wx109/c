#include<stdio.h>
#include<string.h>

void copy(char* p1, char* p2,int n,int m);

int main() {
	char str1[100];
	char str2[100];
	int n,m;
	printf("please enter n:\n");
	scanf("%d",&n);
	getchar();
	//while (getchar != '\n') {
	printf("\n请输入%d个字符:\n", n);
	gets(str1);
	//}
	printf("请输入要从第几个字符开始复制:\n");
	scanf("%d",&m);
	char* p1 = str1, * p2 = str2;
	copy(p1, p2,n,m);
	//for (int i = 0; str2[i] != '\0'; i++) {
	//	printf("%c", str2[i]);
	//}
	printf("\n");
	//printf("%s",str2);
	//printf("\n");
	puts(str2);
}

void copy(char* p1, char* p2, int n, int m) {
	char* p3 = p1 + m - 1;
	int i;
	for (i = 0; *(p3 + i) != '\0'; i++) {
		*(p2 + i) = *(p3 + i);
	}
	*(p2 + i) = '\0';
	//for (int i = 0; *(p2 + i) != '\0'; i++) {
	//	printf("%c",*(p2+i));
	//}
	printf("\0");
	
}
