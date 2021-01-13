#include<stdio.h>

int main() {
	char c[80];
	printf("请输入密码：\n");
	gets(c);
	printf("密码是：%s\n",c);
	/*for (int i = 0; i < 10; i++) {
		//gets(c);
		if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
			c[i] = 25 - c[i];
	}*/
	for (int i = 0; i < 80 && c[i] != '\0'; i++) {
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] = 155 - c[i];
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = 219 - c[i];
		else
			c[i] = c[i];
	}
	printf("明码是：%s\n",c);
	/*for (int i = 0; i < 10; i++) {
		puts(c);
	}*/
}