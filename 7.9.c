#include<stdio.h>
#include<string.h>

void census(char str[]);

int main() {
	char str1[80];
	printf("������һ���ַ�����\n");
	gets(str1);
	census(str1);
}

void census(char str[]) {
	int a, b, c, d;
	a = b = c = d = 0;
	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			a++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			b++;
		}
		else if (str[i] == ' ')
			c++;
		else
			d++;
	}
	printf("�ַ����к�����ĸ%d��������%d�����ո�%d���������ַ�%d��\n",a,b,c,d);
}