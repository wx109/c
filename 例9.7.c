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
		printf("�������%d��ѧ����ѧ�ţ�",i+1);
		scanf("%d",&stu[i].num);
		printf("�������%d��ѧ����������", i + 1);
		scanf("%s", &stu[i].name);
		for (int j = 0; j < 3; j++) {
			printf("�������%d��ѧ���ĵ�%d�ſεĳɼ���", i + 1,j+1);
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
	printf("ѧ����ѧ��Ϊ��%d\nѧ��������Ϊ��%s\n", stu.num, stu.name);
	for (int i = 0; i < 3; i++) {
		printf("ѧ���ĵ�%d�ųɼ�Ϊ%f\n", i+1,stu.grade[i]);
	}
	printf("ѧ����ƽ���ɼ�Ϊ��%f\n", stu.aver);
}
