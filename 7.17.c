#include<stdio.h>
#include<math.h>
#include<string.h>

void shift(int a, char b[]);

int main() {
    int a;
    char b[100];
    printf("请输入一个整数：\n");
    scanf("%d",&a);
    shift(a, b);
    printf("字符串为：\n");
    puts(b);
}

void shift(int a, char b[]) {
    int i = 0, n = 0;
    int q = a / pow(10, i);
    int m,j;
    while (q > 0) {
        n++;
        i++;
        q = a / pow(10, i);
    }
    for (j = 0; j < n; j++) {
        m = a / pow(10, n - 1 - j);
        a = a - m * pow(10, n - 1 - j);
        b[j] = m + '0';
    }
    b[j] = '\0';
}