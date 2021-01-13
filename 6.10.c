#include<stdio.h>
#include<string.h>

int main() {
	char text[3][80];
	int a, b, c, d, e;//a-大写，b-小写，c-数字，d-空格，e-其他
	a = b = c = d = e = 0;
	for (int i = 0; i < 3; i++) {
		printf("请输入字符串%d\n",i+1);
		gets(text[i]);
		for (int j = 0; j < 80 && text[i][j] != '\0'; j++) {
			if (text[i][j] >= 'A' && text[i][j] <= 'Z')
				a++;
			else if (text[i][j] >= 'a' && text[i][j] <= 'z')
				b++;
			else if (text[i][j] >= '0' && text[i][j] <= '9')
				c++;
			else if (text[i][j] == ' ')
				d++;
			else 
				e++;
		}
	}
	printf("大写字母的字符数：%d\n小写字母的字符数：%d\n数字的字符数：%d\n空格的字符数：%d\n其他的字符数：%d\n",a,b,c,d,e);
	return 0;
}