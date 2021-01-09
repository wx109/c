#include<stdio.h>

int main() {
	double i,p,p1,p2,p3,p4,p5,p6;
	p1 = 100000*0.1;
	p2 = 100000 * 0.075;
	p3 = 200000 * 0.05;
	p4 = 200000 * 0.03;
	p5 = 400000 * 0.015;
	printf("请输入利润：\n");
	scanf_s("%lf",&i);
	if (i <= 100000) {
		//double p1;
		p1 = i * 0.1;
		p = p1;
		printf("可分得提成：%lf\n", p);
	}
	if (i > 100000 && i<=200000) {
		//double p2;
		p2 = (i - 100000) * 0.075;
		p = p1 + p2;
		//printf("可分得提成：%lf\n", p);
	}
	if (i > 200000 && i <= 400000) {
		p3 = (i - 200000) * 0.05;
		p = p1 + p2 + p3;
		//printf("可分得提成：%lf\n", p);
	}
	if (i > 400000 && i <= 600000) {
		p4 = (i - 400000) * 0.03;
		p = p1 + p2 + p3 + p4;
		//printf("可分得提成：%lf\n", p);
	}
	if (i > 600000 && i <= 1000000) {
		p5 = (i - 600000) * 0.015;
		p = p1 + p2 + p3 + p4+p5;
		//printf("可分得提成：%lf\n", p);
	}
	if (i> 1000000) {
		p6 = (i - 1000000) * 0.01;
		p = p1 + p2 + p3 + p4 + p5+p6;
		//printf("可分得提成：%lf\n", p);
	}
	printf("可分得提成：%lf\n",p);
	//printf("%lf %lf %lf %lf %lf %lf", p1, p2, p3, p4, p5, p6);

}