#include<stdio.h>
#include<string.h>

int main() {
	char str1[80], str2[40];
	int i = 0,j=0;
	printf("�������ַ�1��\n");
	gets(str1);
	printf("�������ַ�2��\n");
	gets(str2);
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
	{
		str1[i++] = str2[j++];
	}
	str1[i] = '\0';
	printf("�ϲ�����ַ�Ϊ��%s\n",str1);

}