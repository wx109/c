#include<stdio.h>

/*void stu_aver(char stu[], float grade[]);
void les_aver(char les[], float grade[]);
void highest(char stu[], char les[], float grade[]);
void variance();*/
/*int main() {
	char stu[5], les[5];
	float grade[5][5];
	for (int j = 0; j < 5; j++) {
		printf("请输入第%d门课程的名称：\n", j + 1);
		scanf("%s", les[j]);
		}
	for (int i = 0; i < 5; i++) {
		printf("请输入第%d个学生的名字：\n",i+1);
		scanf("%s",stu[i]);
		//for (int j = 0; j < 5; j++) {
		//	printf("请输入第%d门课程的名称：\n", j + 1);
		//	scanf("%s", les[j]);
		//}
		for (int j = 0; j < 5; j++) {
			printf("请输入第%d门课程的成绩：\n", j + 1);
			scanf("%fl", &grade[i][j]);
		}
	}
}

void stu_aver(char stu[], float grade[]) {
	int sum=0,aver[5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			sum = sum + grade[i][j];
		}
		aver[i] = sum / 5;
		sum = 0;
	}
}

void les_aver(char les[], float grade[]) {}
void highest(char stu[], char les[], float grade[]) {}
void variance() {}*/

# define N 10 //学生数
# define M 5 //课程数

int stu[N];
float grade[N][M];
float aver1[N];

void aver_stu();
void aver_les();
void highest();
void variance();


int main() {
	//输入学生的学号和各科成绩
	for (int i = 0; i < N; i++) {
		printf("请输入第%d个学生的学号：\n",i+1);
		scanf("%d",&stu[i]);
		for (int j = 0; j < M; j++) {
			printf("请输入第%d个学生，第%d门课的成绩:\n",i+1,j+1);
			scanf("%f",&grade[i][j]);
		}
	}
	//aver_stu();
	//aver_les();
	//highest();
	variance();
}

void aver_stu() {
	float sum = 0;
	//float aver1[N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			sum = sum + grade[i][j];
		}
		aver1[i] = sum / M;
		sum = 0;
	}
	for (int i = 0; i < N; i++) {
		printf("学号为:%d的学生的平均成绩为%f:\n",stu[i],aver1[i]);
	}
}
void aver_les() {
	float sum = 0;
	float aver2[M];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			sum = sum + grade[j][i];
		}
		aver2[i] = sum / N;
		sum = 0;
	}
	for (int i = 0; i < M; i++) {
		printf("第%d门课的平均成绩为%f:\n", i+1, aver2[i]);
	}
}
void highest() {
	float max;
	max = grade[0][0];
	int a = 0,b = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (max < grade[i][j]) {
				max = grade[i][j];
				a = i;
				b = j;
			}
		}
	}
	//printf("%d %d",a,b);
	printf("成绩最高的为学号为%d的第%d门课程分数为%f\n",stu[a],b+1,grade[a][b]);
}
void variance() {
	float a=0, b=0;
	for (int i = 0; i < N; i++) {
		a = a+aver1[i] * aver1[i];
		b = b + aver1[i];
	}
	float c;
	c = a / N - (b / N) * (b / N);
	printf("方差是：%f",c);
}
