#include<stdio.h>
#include<string.h>

int main() {
	char s1[40], s2[40];
	printf("������Ҫ���Ƶ��ַ���\n");
	scanf("%s",s2);
	//gets(s2);
	for (int i = 0; i <= strlen(s2); i++)
	{
		s1[i] = s2[i];
	}
	printf("���ƵĽ���ǣ�\n");
	printf("%s\n",s1);

	//puts(s1);
}