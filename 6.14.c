#include<stdio.h>
#include<string.h>

int main() {
	char s1[20], s2[20];
	printf("«Î ‰»Îs1£∫\n");
	gets(s1);
	printf("«Î ‰»Îs2£∫\n");
	gets(s2);
	for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
		if (s1[i] != s2[i]) {
			printf("%d\n", s1[i] - s2[i]);
			break;
		}
		else if (s1[i] == s2[i] && s1[i + 1] == '\0' && s2[i + 1] == '\0') {
			printf("%d\n", s1[i] - s2[i]);
		}
	}
	return 0;
}