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
		a[i].number = i + 1;
		if (i != 12) {
			a[i].next = &a[i + 1];
		}
		else {
			a[i].next = &a[0];
		}
	}
	//printf("%d\n",head->number);
	p1 = head;
	//printf("%d",p1->number);
	int count = 0, rest = 13;
	//int i = 0;
	do {
		if (p1->number != -1) {
			count++;
			if (count == 3) {
				p1->number = -1;
				count = 0;
				rest--;
			}
			p1 = p1->next;

		}
		else {
			p1 = p1->next;
		}
	} while (rest > 1);
	for (int j = 0; j < 13; j++) {
		if (a[j].number != -1) {
			printf("%d", a[j].number);
		}
	}
}