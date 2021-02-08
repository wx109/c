#include<stdio.h>

struct Student {
	int num;
	char name[20];
	float grade;
};
void Input(struct Student* p);
void print(struct Student* p);
int main() {
	struct Student stu[5];
	struct Student* p;
	p = stu;
	Input(p);
	print(p);
}
void Input(struct Student* p) {
	for (int i = 0; i < 5; i++) {
		printf("请输入第%d个学生的信息：\n",i+1);
		scanf("%d %s %f",&(*(p+i)).num, (*(p+i)).name ,& (*(p+i)).grade);
	}
}
void print(struct Student* p) {
	for (int i = 0; i < 5; i++) {
		printf("第%d个学生的信息为：\n",i+1);
		printf("%-5d%-10s%-5f\n", (*(p + i)).num, (*(p + i)).name, (*(p + i)).grade);
		
	}
}