#include<stdio.h>

int main() {
	float average(float arry[],int n);
	float score1[5] = {1,2,3,4,5};
	float score2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("第一个班五名学生的成绩为：%f\n",average(score1,5));
	printf("第而个班十名学生的成绩为：%f\n", average(score2, 10));
}

float average(float arry[], int n) {
	float aver, sum=0;
	for (int i = 0; i < n; i++) {
		sum = sum + arry[i];
	}
	return (sum / n);
}

