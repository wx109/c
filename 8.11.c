#include<stdio.h>
#include<string.h>
void output(char str[10][20]);
void sort(char str[10][20]);


int main() {
	char str[10][20];
	for (int i = 0; i < 10; i++) {
		printf("�������%d���ַ�����\n",i+1);
		scanf("%s",str+i);
	}
	printf("�����˳��Ϊ��\n");
	output(str);
	sort(str);
	printf("\n����������˳��Ϊ\n");
	output(str);
}

void output(char str[10][20]) {
	for (int i = 0; i < 10; i++) {
		printf("%s\n",str+i);
	}
}
void sort(char str[10][20]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10-i-1; j++) {
			if (strcmp((str + j), (str + j + 1)) > 0) {
				//int *temp;
				//temp = *(str + j);
				//*(str + j) = *(str + j + 1);
				//*(str + j) = temp;
				int temp[20];
				strcpy(temp,str+j);
				strcpy(str+j,str+j+1);
				strcpy(str+j+1,temp);
			}
		}
	}
}
