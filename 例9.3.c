#include<stdio.h>
#include<string.h>

struct Person {
	char name[20];
	int count;
};

int main() {
	struct Person leader[3] = { "Li",0,"Zhang",0,"Sun",0 };
	char leader_name[20];
	for (int i = 0; i < 10; i++) {
		printf("����������֧�ֵĺ�ѡ�˵����֣�\n");
		scanf("%s",leader_name);
		for (int j = 0; j < 3; j++) {
			if (strcmp(leader_name, leader[j].name)==0)
				leader[j].count++;
		}
	}
	printf("���Ľ��Ϊ��\n");
	for (int i = 0; i < 3; i++) {
		printf("��ѡ�ˣ�%s�����Ʊ����%d\n", leader[i].name, leader[i].count);
	}
}