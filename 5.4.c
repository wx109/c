#include<stdio.h>
int main() {
	char c;
	//c = getchar();
	int count1=0, count2=0, count3=0, count4=0;
	printf("请输入一行字符：\n");
	while ((c = getchar()) != '\n') {
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			count1++;
		else if (c == ' ')
			count2++;
		else if (c >= '0' && c <= '9')
			count3++;
		else 
			count4++;

	}
	printf("英文字母数：%d\n空格数：%d\n数字数：%d\n其他字符数：%d\n",count1,count2,count3,count4);
}