#include<stdio.h>

void part1(float *p[4]);
void find(float *p[4],int *p1,char *p3[5]);
int main() {
	float grade[4][5];
	int nums[4];
	char lesson[5][10];
	float* p1[4];
	int *p2 = nums;
	//char* p3[5] = lesson;
	char* p3[5];
	for (int i = 0; i < 4; i++) {
		p1[i] = grade[i];
	}
	for (int i = 0; i < 5; i++) {
		p3[i] = lesson[i];
	}
	for (int i = 0; i < 4; i++) {
		printf("�������%d��ѧѧ����ѧ��\n",i+1);
		scanf("%d",p2+i);
	}
	//getchar();
	for (int i =0; i < 5; i++) {
		printf("�������%d��ѧ�Ƶ����ƣ�\n",i+1);
		//gets(lesson[i]);
		//gets(p3 + i);
		scanf("%s",p3[i]);
	}
	//for (int i = 0; i < 5; i++) {
		//printf("��%d��Ϊ��\n",i+1);
		//puts(lesson[i]);
		//puts(p3 + i);
		//printf("\n");
		//printf("%s\n",p3[i]);
	//}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("�������%d��ѧ����%s�ĳɼ���\n",i+1,*(p3+j));
			scanf("%f",*(p1+i)+j);
			//printf("%f\n",p1[i][j]);
		}
	}	
	part1(p1);
	find(p1, p2, p3);
}
void part1(float *p[4]) {
	float sum = 0,aver;
	for (int i = 0; i < 4; i++) {
		//printf("%f", sum);
		sum = sum + *(*(p + i) + 0);
	}
	aver = sum / 4;
	printf("��һ�ſε�ƽ���ɼ�Ϊ��%f\n",aver);
}
void find(float* p[4],int *p2,char *p3[5]) {
	int count = 0;
	int count1=0;
	for (int i = 0; i < 4; i++) {
		count = 0;
		count1 = 0;
		
		for (int j = 0; j < 5; j++) {
			if (*(*(p + i) + j) < 60) {
				count++;
			}
			else if (*(*(p + i) + j) > 85) {
				count1++;
			}
		
		}
		if (count >= 2) {
			float sum = 0;
			printf("ѧ��Ϊ%d��ѧ�����������Ͽγ̲�����.\n",*(p2+i));
			for (int j = 0; j < 5; j++) {
				printf("��%sΪ%f\n",*(p3+j),*(*(p+i)+j));
				sum = sum + *(*(p + i) + j);
			}
			printf("��ƽ���ɼ�Ϊ��%f\n",sum/5);
		}
		else if (count1 == 5) {
			float sum = 0, aver;
			for (int j = 0; j < 5; j++) {
				sum = sum + *(*(p + i) + j);
			}
			aver = sum / 5;
			if (aver > 90) {
				printf("ѧ��Ϊ%d��������ѧ��\n", *(p2 + i));
			}
		}
	}
}