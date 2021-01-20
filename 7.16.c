#include<stdio.h>
#include<string.h>
#include<math.h>

int shift(char a[]);

int main() {
	char a[100];
	printf("请输入一个十六进制的数：\n");
	gets(a);
	int b;
	b=shift(a);
	printf("相对应的十进制数为：%d",b);
}

int shift(char a[]) {
	int sum=0;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '0')
			sum = sum + 0;
		else if (a[i] == '1')
			sum = sum + pow(16, strlen(a)-i-1)*1;
		else if (a[i] == '2')
			sum = sum + pow(16, strlen(a) - i - 1) * 2;
		else if (a[i] == '3')
			sum = sum + pow(16, strlen(a) - i - 1) * 3;
		else if (a[i] == '4')
			sum = sum + pow(16, strlen(a) - i - 1) * 4;
		else if (a[i] == '5')
			sum = sum + pow(16, strlen(a) - i - 1) * 5;
		else if (a[i] == '6')
			sum = sum + pow(16, strlen(a) - i - 1) * 6;
		else if (a[i] == '7')
			sum = sum + pow(16, strlen(a) - i - 1) * 7;
		else if (a[i] == '8')
			sum = sum + pow(16, strlen(a) - i - 1) * 8;
		else if (a[i] == '9')
			sum = sum + pow(16, strlen(a) - i - 1) * 9;
		else if (a[i] == 'A' || a[i] == 'a')
			sum = sum + pow(16, strlen(a) - i - 1) * 10;
		else if (a[i] == 'B' || a[i] == 'b')
			sum = sum + pow(16, strlen(a) - i - 1) * 11;
		else if (a[i] == 'C' || a[i] == 'c')
			sum = sum + pow(16, strlen(a) - i - 1) * 12;
		else if (a[i] == 'D' || a[i] == 'd')
			sum = sum + pow(16, strlen(a) - i - 1) * 13;
		else if (a[i] == 'E' || a[i] == 'e')
			sum = sum + pow(16, strlen(a) - i - 1) * 14;
		else if (a[i] == 'F' || a[i] == 'f')
			sum = sum + pow(16, strlen(a) - i - 1) * 15;
		//printf("%d\n", sum);
	}
	return sum;
}

