#include<stdio.h>

int main() {
	char a, b, c;//�ֱ��ʾA,B,C�Ķ���
	for (a = 'X'; a <= 'Z'; a++) {
		for (b = 'X'; b <= 'Z'; b++) {
			if (a != b)
				for (c = 'X'; c <= 'Z'; c++) {
					if ((a != c && b != c) && (a != 'X' && c != 'X' && c != 'Z'))
						printf("A�Ķ�����:%c\nB�Ķ�����:%c\nC�Ķ�����:%c\n",a,b,c);
				}
		}
	}
	return 0;
}