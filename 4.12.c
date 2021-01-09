#include<stdio.h>
#include<math.h>

int main() {
	float x, y, d1, d2, d3, d4,h;
	printf("请输入点A的坐标（x，y）：\n");
	scanf_s("%f %f",&x,&y);
	d1 = sqrt((x - 2) * (x - 2) + (y - 2) * (y - 2));
	d2 = sqrt((x + 2) * (x + 2) + (y - 2) * (y - 2));
	d3 = sqrt((x - 2) * (x - 2) + (y + 2) * (y + 2));
	d4 = sqrt((x + 2) * (x + 2) + (y + 2) * (y + 2));
	if (d1 <= 1 || d2 <= 1 || d3 <= 1 || d4 <= 1)
		h = 10;
	else
		h = 0;
	printf("高度是：%f\n",h);
}