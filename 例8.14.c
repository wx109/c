# include<stdio.h>

void search(float(*p)[4], int n);
int main() {
    float score[3][4] = { {65,57,70,60},{58,87,90,81},{90,99,100,98} };
    search(score,3);
    return 0;
}

void search(float(*p)[4], int n) {
    int i, j, flag;
    for (j = 0; j < n; j++) {
        flag = 0;
        for (i = 0; i < 4; i++) {
            if (*(*(p + j) + i) < 60) {
                flag = 1;
            }
        }
        //printf("%d",flag);
        if (flag == 1) {
            printf("第%d个学生的成绩有不及格的科目，其每一科成绩分别是：\n",j+1);
            for (i = 0; i < 4; i++)
                printf("%5.1f",*(*(p+j)+i));
            printf("\n");
        }
    }
}