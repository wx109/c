#include<stdio.h>
#include<string.h>

int main() {
    char str[3][20];
    char string[20];
    printf("�����������ַ�����\n");
    for (int i = 0; i <= 2; i++) {
        gets(str[i]);
    }
    /*for (int i = 0; i <= 2; i++) {
        printf("%s\n",str[i]);
        //puts(string[i]);
    }*/
    if (strcmp(str[0], str[1]) > 0)
        strcpy(string, str[0]);
    else
        strcpy(string, str[1]);
    if (strcmp(string, str[2]) < 0)
        strcpy(string, str[2]);
    printf("�����ַ����ǣ�%s\n",string);
    return 0;

}