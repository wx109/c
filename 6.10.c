#include<stdio.h>
#include<string.h>

int main() {
	char text[3][80];
	int a, b, c, d, e;//a-��д��b-Сд��c-���֣�d-�ո�e-����
	a = b = c = d = e = 0;
	for (int i = 0; i < 3; i++) {
		printf("�������ַ���%d\n",i+1);
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
	printf("��д��ĸ���ַ�����%d\nСд��ĸ���ַ�����%d\n���ֵ��ַ�����%d\n�ո���ַ�����%d\n�������ַ�����%d\n",a,b,c,d,e);
	return 0;
}