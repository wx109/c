#include<stdio.h>

/*void stu_aver(char stu[], float grade[]);
void les_aver(char les[], float grade[]);
void highest(char stu[], char les[], float grade[]);
void variance();*/
/*int main() {
	char stu[5], les[5];
	float grade[5][5];
	for (int j = 0; j < 5; j++) {
		printf("�������%d�ſγ̵����ƣ�\n", j + 1);
		scanf("%s", les[j]);
		}
	for (int i = 0; i < 5; i++) {
		printf("�������%d��ѧ�������֣�\n",i+1);
		scanf("%s",stu[i]);
		//for (int j = 0; j < 5; j++) {
		//	printf("�������%d�ſγ̵����ƣ�\n", j + 1);
		//	scanf("%s", les[j]);
		//}
		for (int j = 0; j < 5; j++) {
			printf("�������%d�ſγ̵ĳɼ���\n", j + 1);
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

# define N 10 //ѧ����
# define M 5 //�γ���

int stu[N];
float grade[N][M];
float aver1[N];

void aver_stu();
void aver_les();
void highest();
void variance();


int main() {
	//����ѧ����ѧ�ź͸��Ƴɼ�
	for (int i = 0; i < N; i++) {
		printf("�������%d��ѧ����ѧ�ţ�\n",i+1);
		scanf("%d",&stu[i]);
		for (int j = 0; j < M; j++) {
			printf("�������%d��ѧ������%d�ſεĳɼ�:\n",i+1,j+1);
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
		printf("ѧ��Ϊ:%d��ѧ����ƽ���ɼ�Ϊ%f:\n",stu[i],aver1[i]);
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
		printf("��%d�ſε�ƽ���ɼ�Ϊ%f:\n", i+1, aver2[i]);
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
	printf("�ɼ���ߵ�Ϊѧ��Ϊ%d�ĵ�%d�ſγ̷���Ϊ%f\n",stu[a],b+1,grade[a][b]);
}
void variance() {
	float a=0, b=0;
	for (int i = 0; i < N; i++) {
		a = a+aver1[i] * aver1[i];
		b = b + aver1[i];
	}
	float c;
	c = a / N - (b / N) * (b / N);
	printf("�����ǣ�%f",c);
}
