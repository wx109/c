#include<stdio.h>
#include<string.h>

void sort(char* []);
int main() {
	char* p[10];
	char str[10][20];
	for (int i = 0; i < 10; i++) {
		p[i] = str[i];
	}
	printf("please input 10 strings:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%s",p+i);
	}
	sort(p);
	printf("Now,the sequence is:\n");
	for (int i = 0; i < 10; i++) {
		printf("%s\n",p[i]);
	}
	return 0;

}
void sort(char* p[]) {
	int i, j;
	char* temp;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (strcmp(*(p + j), *(p + j + i)) > 0) {
				temp = *(p + j);
				*(p + j) = *(p + j);
				*(p + j + 1) = temp;
			}
		}
	}
}