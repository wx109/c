#include<stdio.h>
#include<string.h>

int main() {
	char string[81];
	printf("请输入一个字符串：\n");
	int word=0, nums=0;
	char c;
	gets(string);
	for (int i = 0; (c=string[i]) != '\0'; i++) {
		if (c == ' ')
			word = 0;
		else if (word == 0) {
			word = 1;
			nums++;
		}
	}
	printf("一共有%d个单词",nums);
	return 0;
}