#include<stdio.h>
int strcmp1(char *p1,char *p2);

int main() {
	char str1[100], str2[100];
	printf("please enter str1:\n");
	gets(str1);
	printf("please enter str2:\n");
	gets(str2);
	//puts(str1);
	//printf("\n");
	//puts(str2);
	//printf("\n");
	char* p1 = str1, * p2 = str2;
	printf("½á¹ûÊÇ%d\n",strcmp1(p1,p2));
}

int strcmp1(char* p1, char* p2) {
	int a=0;
	for (int i = 0; *(p1 + i) != '\0' || *(p2 + i) != '\0'; i++) {
		//printf("%c %c\n", *(p1 + i), *(p2 + i));
		if (*(p1 + i) == *(p2 + i)) {
			//printf("%c %c\n", *(p1 + i), *(p2 + i));
			//i++;
			//printf("1\n");
		}
		else if (*(p1 + i) > *(p2 + i)) {
			a = *(p1 + i) - *(p2 + i);
			//printf("2\n");
			break;
		}
		else if (*(p1 + i) < *(p2 + i)) {
			//printf("%c %c\n", *(p1 + i), *(p2 + i));
			a = *(p1 + i) - *(p2 + i);
			//printf("3\n");
			break;
		}
		else if (*(p1 + i) == '\0' && *(p2 + i) != '\0') {
			//printf("4\n");
			a = *(p2 + i);
			a = -a;
			break;
		}
		else if (*(p1 + i) != '\0' && *(p2 + i) == '\0') {
			//printf("5\n");
			a = *(p1 + i);
			break;
		}
		//printf("%d\n",a);
	}
	
	return a;
}