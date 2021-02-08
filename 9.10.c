#include<stdio.h>
#define LEN sizeof(struct Student)
struct Student {
	long num;
	int score;
	struct Student* next;
};
int n,sum=0;

struct Student* creat(void);
struct Student* insert(struct Student*,struct Student*);
void print(struct Student *head);
int main() {
	struct Student* a, * b,* ab;
	printf("please input a:\n");
	a = creat();
	sum = sum + n;
	printf("please input b:\n");
	b = creat();
	sum = sum + n;
	ab = insert(a, b);
	print(ab);
}

struct Student* creat() {
	struct Student* head, * p1, * p2;
	n = 0;
	p1 = p2 = (struct Student*)malloc(LEN);
	scanf("%ld,%d",&p1->num,&p1->score);
	head = NULL;
	while (p1->num != 0) {
		n++;
		if (n == 1) {
			head = p1;
		}
		else {
			p2->next = p1;
		}
		p2 = p1; 
		p1 = (struct Student*)malloc(LEN);
		scanf("%ld,%d", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}

struct Student* insert(struct Student* a, struct Student* b) {
	struct Student* pa1, * pa2,* pb1,* pb2;
	pa1 = pa2 = a;
	pb1 = pb2 = b;
	do {
		while ((pa1->num < pb1->num) && (pa1->next != NULL)) {
			pa2 = pa1;
			pa1 = pa1->next;
		}
		if (pb1->num <= pa1->num) {
			if (a == pa1)
				a = pb1;
			else
				pa2->next = pb1;
			pb1 = pb1->next;
			pb2->next = pa1;
			pa2 = pb2;
			pb2 = pb1;
		}
	} while ((pa1->next != NULL) || (pa1 == NULL && pb1 != NULL));
	if ((pb1 != NULL) && (pb1->num > pa1->num) && (pa1->next == NULL))
		pa1->next = pb1;
	return a;

}

void print(struct Student* head) {
	struct Student* p;
	printf("there are %d records:\n",sum);
	p = head;
	if (p != NULL) {
		do {
			printf("%ld %ld\n", p->num, p->score);
			p = p->next;
		} while (p != NULL);
	}
}
