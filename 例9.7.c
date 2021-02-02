#include<stdio.h>
#define N 3
struct Student {
	int num;
	char name[20];
	float grade[3];
	float aver;
};
void input(struct Student stu[]);
struct Student max(struct Student stu[]);
void output(struct Student stu);

int main() {
	//int const N = 3;
	struct Student stu[N];
	struct Student* p;
	p = stu;
	input(p);
	output(max(p));
}

void input(struct Student stu[]) {
	float sum;
	for (int i = 0; i < N; i++) {
		sum = 0;
		printf("请输入第%d名学生的学号：",i+1);
		scanf("%d",&stu[i].num);
		printf("请输入第%d名学生的姓名：", i + 1);
		scanf("%s", &stu[i].name);
		for (int j = 0; j < 3; j++) {
			printf("请输入第%d名学生的第%d门课的成绩：", i + 1,j+1);
			scanf("%f", &stu[i].grade[j]);
			sum = sum + stu[i].grade[j];
		}
		stu[i].aver = sum / 3;		
	}
}
struct Student max(struct Student stu[]) {
	struct Student max_student;
	max_student = stu[0];
	for (int i = 1; i < 3; i++) {
		if (max_student.aver < stu[i].aver) {
			max_student = stu[i];
		}
	}
	return max_student;
}
void output(struct Student stu) {
	printf("学生的学号为：%d\n学生的姓名为：%s\n", stu.num, stu.name);
	for (int i = 0; i < 3; i++) {
		printf("学生的第%d门成绩为%f\n", i+1,stu.grade[i]);
	}
	printf("学生的平均成绩为：%f\n", stu.aver);
}
