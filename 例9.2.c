#include<stdio.h>

struct Student {
	int num;
	char name[20];
	int grade;
};
int main() {
	struct Student student1, student2;
	printf("请输入第一个学生的学号，姓名，成绩:\n");
	scanf("%d %s %d",&student1.num,student1.name,&student1.grade);
	printf("请输入第二个学生的学号，姓名，成绩:\n");
	scanf("%d %s %d", &student2.num, student2.name,&student2.grade);
	if (student1.num > student2.num) {
		printf("成绩较高的学生的学号为：%d 姓名为：%s 成绩为：%d\n", student1.num, student1.name, student1.grade);
	}
	else
		printf("成绩较高的学生的学号为：%d 姓名为：%s 成绩为：%d\n", student2.num, student2.name, student2.grade);
	return 0;
}