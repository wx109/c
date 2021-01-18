#include<stdio.h>
#include<string.h>

int main() {
	void enter_string(char str[]);
	void del_string(char str[], char ch);
	void print_string(char str[]);
	//printf("");
	char str1[80];
	enter_string(str1);
	//char c = 'q';
	char c;
	c = ' ';
	//printf("please enter the factor:\n");
	//scanf("%c",&c);

	del_string(str1, c);
	print_string(str1);

}

void enter_string(char str[]) {
	printf("please enter a string:\n");
	gets(str);
}

void del_string(char str[], char ch) {
	int i, j;
	for (i = 0, j = 0; i < strlen(str); i++) {
		if (str[i] != ch) {
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
}

void print_string(char str[]) {
	//printf("输出的数组为：");
	//puts(str);
	printf("%s\n", str);
}