#include<stdio.h>

struct People {
	int number;
	struct People* next;
};

int main() {
	struct People a[13];
	struct People* p1, * head;
	head = a;
	for (int i = 0; i < 13; i++) {
		a[i].number = i+1;
		if (i != 12) {
			a[i].next = &a[i + 1];
		}
		else {
			a[i].next = NULL;
		}
	}
	int count = 0,rest=13;
	int i = 0;
	do {
		if (a[i].number != -1) {
			count++;
			if (count == 3) {
				a[i].number = -1;
				count = 0;
				rest--;
			}
			i++;
			
		}
		else {
			i++;
		}
		if (i == 13) {
			i = 0;
		}
	} while (rest > 1);
	for (int j = 0; j < 13; j++) {
		if (a[j].number != -1) {
			printf("%d", a[j].number);
		}
	}
}