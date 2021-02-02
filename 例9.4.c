#include<stdio.h>

struct Student {
	int num;
	char name[20];
	float grade;
};

int main() {
	struct Student stu[5] = { {10101,"Zhang",78},{10103,"Wang",98.5},{10106,"Li",86},{10108,"Ling",73.5},{10110,"Sun",100} };
	struct Student temp;
	//for (int i = 0; i < 5; i++) {
	//	printf("%d  %s  %f\n", stu[i].num, stu[i].name, stu[i].grade);
	//}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (stu[j].grade > stu[j + 1].grade) {
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d  %s  %f\n", stu[i].num, stu[i].name, stu[i].grade);
	}

}