#include<stdio.h>
#include<string.h>

void tlongest(char str1[], char str2[]);

int main() {
	char str1[80],str2[80];
	printf("请输入一个字符串：\n");
	gets(str1);
	tlongest(str1,str2);
	printf("最长的单词是：\n");
	puts(str2);
	return 0;
}

void tlongest(char str1[], char str2[]) {
	int length, length1, length2,k;
	k=length = length1 = length2 = 0;
	for (int i = 0; i <= strlen(str1); i++) {
		if (str1[i] != ' '&&str1[i]!='\0')
			length++;
		else {
			length2 = length;
			if (length2 > length1) {
				length1 = length2;
				k = i  - length;
			}
			length = 0;
		}
	}
	printf("%d\n",k);
	int j;
	for (j = 0; j < length1; j++) {
		str2[j] = str1[k];
		k++;
	}
	str2[j] = '\0';
}