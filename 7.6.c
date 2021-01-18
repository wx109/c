#include<stdio.h>
#include<string.h>

void link(char str1[],char str2[],char str3[]);
int main() {
	char str1[80], str2[80];
	printf("请输入第一个字符串:\n");
	gets(str1);
	//printf("str1=%d", strlen(str1));
	printf("请输入第二个字符串:\n");
	gets(str2);
	char str3[80];
	link(str1, str2, str3);
	//puts(str1);
	//printf("\n");
	//puts(str2);
	//printf("\n");
	puts(str3);
	//for (int i = 0; i < strlen(str3); i++)
    //printf("%s",str3);
}

void link(char str1[], char str2[], char str3[]) {
	int i, j;
	/*for (i = 0; str1[i]!='\0'; i++) {
		str3[i] = str1[i];
	}
	for (j = 0; str2[j] != '\0'; j++) {
		str3[i+j] = str2[j];
	}*/
	/*for (int i = 0; i < strlen(str1) + strlen(str2); i++) {
		str3[i] = str1[i];
		str3[strlen(str1) + i] = str2[i];
	}*/
	for (int i = 0; i < strlen(str1); i++)
		str3[i] = str1[i];
	for (int i = 0; i < strlen(str2); i++)
		str3[strlen(str1) + i] = str2[i];
	//str3[i + j] = '\0';
	str3[strlen(str1) + strlen(str2)] = '\0';
	//printf("%d",strlen(str2));
}