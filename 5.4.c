#include<stdio.h>
int main() {
	char c;
	//c = getchar();
	int count1=0, count2=0, count3=0, count4=0;
	printf("������һ���ַ���\n");
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
	printf("Ӣ����ĸ����%d\n�ո�����%d\n��������%d\n�����ַ�����%d\n",count1,count2,count3,count4);
}