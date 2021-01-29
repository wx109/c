#include<stdio.h>
#include<math.h>

int main() {
	char str[100];
	printf("please enter a string:\n");
	gets(str);
	char* p = str;
	int tag=0;
	int a[100], k = 0;
	for (int i = 0; *(p + i) != '\0'; i++) {
		if (*(p + i) >= '0' && *(p + i) <= '9' && tag == 0) {
			tag = 1;
		}
		else if (*(p + i) >= '0' && *(p + i) <= '9' && tag != 0) {
			if (*(p + i) - *(p + i - 1) == 1) {
				tag++;
			}
			else {
				a[k] = 0;
				//printf("a[k]=%d\n", a[k]);
				for (int j = 0; j < tag; j++) {
					a[k] = (*(p + i - j - 1) - '0') * (int)pow(10, j) + a[k];
					//printf("a[k]=%d\n",a[k]);
					//printf("v=%f\n",pow(10, j));
					//printf("m=%d\n", *(p + i - j - 1) - '0');
				}
				k++;
				tag = 0;
			}
		}
		else if (tag != 0) {
			a[k] = 0;
			for (int j = 0; j < tag; j++) {
				a[k] = (*(p + i - j - 1) - '0') * pow(10, j) + a[k];
				//printf("a[k]=%d\n", a[k]);
			}
			k++;
			tag = 0;
		}
		else
			tag = 0;
	}
	printf("k=%d\n",k);
	for (int i = 0; i < k; i++) {
		printf("a[%d]=%d\n",k+1,a[i]);
	}
}