#include<stdio.h>

int main() {
	float average(float arry[],int n);
	float score1[5] = {1,2,3,4,5};
	float score2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("��һ��������ѧ���ĳɼ�Ϊ��%f\n",average(score1,5));
	printf("�ڶ�����ʮ��ѧ���ĳɼ�Ϊ��%f\n", average(score2, 10));
}

float average(float arry[], int n) {
	float aver, sum=0;
	for (int i = 0; i < n; i++) {
		sum = sum + arry[i];
	}
	return (sum / n);
}

