#include<stdio.h>
#include<string.h>

void sort(char* p1,char* p2);
int main() {
	char a[3][100];
	for (int i = 0; i < 3; i++) {
		printf("请输入第%d个字符串：\n",i+1);
		//scanf("%s",a[i]);
		gets(a[i]);
	}
	//char* p = a;
	sort(a, a + 1);
	sort(a + 1, a + 2);
	sort(a, a + 1);
	printf("由小到大的输出结果为：\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\n",a+i);
	}
}

void sort(char *p1,char *p2) {
	if (strcmp(p1, p2) > 0) {
		char temp[100];
		strcpy(temp,p1);
		strcpy(p1, p2);
		strcpy(p2, temp);
	}
}