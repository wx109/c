#include<stdio.h>

int main() {
	char c;
	printf("ÇëÊäÈëÔ­Âë£º\n");
	c = getchar();
	while (c != '\n') {
		if ((c >= 'A' && c <='V') || (c >='a' && c <= 'v'))
			c = c + 4;
		if ((c >= 'W' && c <= 'Z') || (c >= 'w' && c <= 'z'))
			c = c - 22;
		printf("%c", c);
		c = getchar();
	}
	printf("\n");
	return 0;
}