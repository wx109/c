#include<stdio.h>

int main() {
	int age(int num);
	printf("请输入要求年龄学生的编号：\n");
	int n;
	scanf("%d",&n);
	printf("该生的年龄为：%d\n",age(n));	
}

int age(int num) {
	if (num == 1)
		return 10;
	if (num != 1)
		return age(num - 1) + 2;
}