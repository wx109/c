#include<stdio.h>
#include<string.h>

#define N 3

int worknumber[N];
char workname[N][15];

void sort();
void search(int number);
void output();


int main() {
	for (int i = 0; i < N; i++) {
		printf("�������%d��Ա��Ա����:\n",i+1);
		scanf("%d",&worknumber[i]);
		printf("�������%d��Ա��������\n", i + 1);
		scanf("%s", workname[i]);
	}
	sort();
	/*for (int i = 0; i < N; i++) {
		printf("Ա���ţ�%d Ա��������%s\n",worknumber[i],workname[i]);
		//printf(" ");
		//printf("\0");
	}*/
	output();
	printf("\n");
	int number;
	printf("������Ҫ����Ա����Ա���ţ�\n");
	scanf("%d",&number);
	search(number);

}
void output() {
	for (int i = 0; i < N; i++) {
		printf("Ա���ţ�%d Ա��������%s\n", worknumber[i], workname[i]);
		//printf(" ");
		//printf("\0");
	}
}

void sort() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (worknumber[j] > worknumber[j + 1]) {
				int temp;
				temp = worknumber[j];
				worknumber[j] = worknumber[j + 1];
				worknumber[j + 1] = temp;
				char m[15];
				strcpy(m , workname[j]);
				strcpy(workname[j], workname[j + 1]);
				strcpy(workname[j + 1], m);
				//printf("%s\n",m);
			}
		}
	}
}

void search(int number) {
	int top = 0, bott = N - 1, loca = 0, sign = 1;
	int mid;
	if (number<worknumber[0] || number>worknumber[N - 1])
		loca = -1;
	while ((top <= bott) && (sign == 1)) {
		mid = (top + bott) / 2;
		if (number == worknumber[mid]) {
			loca = mid;
			printf("���˵�����Ϊ��%s", workname[loca]);
			sign = -1;
		}
		else if (number < worknumber[mid]) {
			bott = mid - 1;
		}
		else
			top = mid + 1;
	}
	if (sign == 1 || loca == -1)
		printf("�����ڴ�Ա��");
}