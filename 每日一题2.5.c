#include<stdio.h>
#include<math.h>

int equalSubstring(char* s, char* t, int maxCost);
int main() {
	char s[20], t[20];
	char* p1, * p2;
	p1 = s;
	p2 = t;
	printf("ÊäÈës:\n");
	gets(s);
	printf("ÊäÈët:\n");
	gets(t);
    printf("the result=%d",equalSubstring(p1,p2,3));
}

/*int equalSubstring(char* s, char* t, int maxCost) {
    if (maxCost == 0) {
        int count = 0;
        int max = 0, now = 0;
        for (int i = 0; *(s + i) != '\0'; i++) {
            if (*(s + i) == *(t + i)) {
                count++;
            }
            else {
                now = count;
                if (now > max) {
                    max = now;
                }
                count = 0;
            }
        }
        if (count > max)
            max = count;
        return max;
    }
    else {
        int length = 0;
        for (int i = 0; *(s + i) != '\0'; i++) {
            length++;
        }
        int a[20];
        for (int i = 0; *(s + i) != '\0'; i++) {
            a[i] = fabs(*(s + i) - *(t + i));
        }
        int count = 0;
        int rest = maxCost;
        int max = 0, now = 0;
        for (int i = 0; i < length; i++) {
            count = 0;
            rest = maxCost;
            //max = now = 0;
            for (int j = i; j < length; j++) {
                rest = rest - a[j];
                if (rest >= 0) {
                    count++;
                }
                else {
                    break;
                }
                //printf("count=%d\n", count);
            }
            now = count;
            //i5printf("now=%d\n", now);
            if (now > max)
                max = now;
        }
        return max;
    }
}*/
