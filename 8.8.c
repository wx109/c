#include<stdio.h>

int main() {
	char str1[100];
	printf("please enter a string:\n");
	gets(str1);
	char* p1 = str1;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	for (int i = 0; *(p1 + i) != '\0'; i++) {
		if (*(p1 + i) >= 'A' && *(p1 + i) <= 'Z') {
			count1++;//��д
		}
		else if (*(p1 + i) >= 'a' && *(p1 + i) <= 'z') {
			count2++;//Сд
		}
		else if (*(p1 + i) >= '0' && *(p1 + i) <= '9') {
			count3++;//����
		}
		else if (*(p1+i)==' ') {
			count4++;//�ո�
		}
		else {
			count5++;//����
		}
	}
	printf("�ַ����д�д��ĸ������Ϊ��%dСд��ĸ������Ϊ��%d���ֵ�����Ϊ��%d�ո������Ϊ��%d�����ַ�������Ϊ��%d",count1,count2,count3,count4,count5);
}