#include<stdio.h>
#include<string.h>

void cpy(char str[],char c[]);
int main(){
	char str1[80];
	printf("please entera a string:\n");
	gets(str1);
	char m[80];
	cpy(str1, m);
	printf("字符串中的原音字符有：\n");
	puts(m);

}

void cpy(char str[], char c[]) {
	int i, j;
	for (i = 0, j = 0; i < strlen(str); i++) {
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'U' || str[i] == 'u')
		{
			c[j] = str[i];
			j++;
		}
	}
	c[j] = '\0';
}