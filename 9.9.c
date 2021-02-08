#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)

struct Student {
	long num;
	float score;
	struct Student* next;
};

int n;
struct Student* creat(void);
void print(struct Student* head);
struct Student* del(struct Student* head, long num);
struct Student* insert(struct Student* head, struct Student* stud);

int main() {
	struct Student* head, stu;
	long del_num;
	printf("input records:\n");
	head = creat();
	print(head);
	printf("input the deleted number:");
	scanf("%ld", &del_num);
	head = del(head, del_num);
	print(head);
	printf("input the inserted record:");
	scanf("%ld,%f", &stu.num, &stu.score);
	head = insert(head, &stu);
	print(head);
	return 0;
}

struct Student* creat(void) {
	struct Student* head;
	struct Student* p1, * p2;
	n = 0;
	p1 = p2 = (struct Student*)malloc(LEN);
	scanf("%ld,%f",&p1->num,&p1->score);
	head = NULL;
	while (p1->num != 0) {
		n = n + 1;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct Student*)malloc(LEN);
		scanf("%ld,%f", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}
void print(struct Student* head) {
	struct Student* p;
	printf("\nNow,these %d records are:\n",n);
	p = head;
	if (head != NULL) {
		do {
			printf("%ld %5.1f\n",p->num,p->score);
			p = p->next;
		} while (p != NULL);
	}
}
struct Student* del(struct Student* head,long num) {
	struct Student* p1, * p2;
	if (head == NULL) {
		printf("\nlist null!\n");
		return head;
	}
	p1 = head;
	while (num != p1->num && p1->next != NULL) {
		p2 = p1;
		p1 = p1->next;
	}
	if (num == p1->num) {
		if (p1 == head)
			head = p1->next;
		else
			p2->next = p1->next;
		printf("delete:%ld\n", num);
		n = n - 1;
	}
	else
		printf("%ld not been found!\n",num);
	return head;
}
struct Student* insert(struct Student* head, struct Student* stud) {
	struct Student* p0, * p1, * p2;
	p1 = head;
	p0 = stud;
	if (head == NULL){
		head = p0;
		p0->next = NULL;
	}
	else {
		while ((p0->num > p1->num) && (p1->next != NULL)) {
			p2 = p1;
			p1 = p1->next;
		}
		if (p0->num <= p1->num) {
			if (head == p1) {
				head = p0;
			}
			else
				p2->next = p0;
			p0->next = p1;
		}
		else {
			p1->next = p0;
			p0->next = NULL;
		}
	}
	n = n + 1;
	return head;

}

