#include<stdio.h>
#include<string.h>

void sort(char *name[],int n);
void print(char *name[],int n);
int main() {
	char* name[] = {"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
	int n = 5;
	//sort(name, n);
	//print(name, n);
	char** p;
	p = name + 2;
	printf("%d\n",*p);
	printf("%s\n", *p);

	//char* p1;
	//p1 = name + 2;
	//printf("%d\n", p1);
	//printf("%s\n", p1);

	return 0;
}

void sort(char* name[], int n) {
	char* temp;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0 ; j < n - i - 1; j++) {
			if (strcmp(name[j], name[j + 1]) > 0) {
				temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
			}
		}
	}
}

void print(char* name[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%s\n",name[i]);
	}
}