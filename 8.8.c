#include<stdio.h>

int main() {
	char str1[100];
	printf("please enter a string:\n");
	gets(str1);
	char* p1 = str1;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	for (int i = 0; *(p1 + i) != '\0'; i++) {
		if (*(p1 + i) >= 'A' && *(p1 + i) <= 'Z') {
			count1++;//大写
		}
		else if (*(p1 + i) >= 'a' && *(p1 + i) <= 'z') {
			count2++;//小写
		}
		else if (*(p1 + i) >= '0' && *(p1 + i) <= '9') {
			count3++;//数字
		}
		else if (*(p1+i)==' ') {
			count4++;//空格
		}
		else {
			count5++;//其他
		}
	}
	printf("字符串中大写字母的数量为：%d小写字母的数量为：%d数字的数量为：%d空格的数量为：%d其他字符的数量为：%d",count1,count2,count3,count4,count5);
}