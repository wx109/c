#include<stdio.h>

struct Student {
	int num;
	char name[20];
	int grade;
};
int main() {
	struct Student student1, student2;
	printf("�������һ��ѧ����ѧ�ţ��������ɼ�:\n");
	scanf("%d %s %d",&student1.num,student1.name,&student1.grade);
	printf("������ڶ���ѧ����ѧ�ţ��������ɼ�:\n");
	scanf("%d %s %d", &student2.num, student2.name,&student2.grade);
	if (student1.num > student2.num) {
		printf("�ɼ��ϸߵ�ѧ����ѧ��Ϊ��%d ����Ϊ��%s �ɼ�Ϊ��%d\n", student1.num, student1.name, student1.grade);
	}
	else
		printf("�ɼ��ϸߵ�ѧ����ѧ��Ϊ��%d ����Ϊ��%s �ɼ�Ϊ��%d\n", student2.num, student2.name, student2.grade);
	return 0;
}