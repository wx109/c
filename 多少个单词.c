#include<stdio.h>
#include<string.h>

int main() {
	char string[81];
	printf("������һ���ַ�����\n");
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
	printf("һ����%d������",nums);
	return 0;
}