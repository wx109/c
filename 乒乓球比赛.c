#include<stdio.h>

int main() {
	char a, b, c;//分别表示A,B,C的对手
	for (a = 'X'; a <= 'Z'; a++) {
		for (b = 'X'; b <= 'Z'; b++) {
			if (a != b)
				for (c = 'X'; c <= 'Z'; c++) {
					if ((a != c && b != c) && (a != 'X' && c != 'X' && c != 'Z'))
						printf("A的对手是:%c\nB的对手是:%c\nC的对手是:%c\n",a,b,c);
				}
		}
	}
	return 0;
}