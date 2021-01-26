#include<stdio.h>

void copy(char *from, char *to);
int main() {
	char *a = "I am a teacher.";
	char b[] = "You are a student.";
	//char* p1 = a, * p2 = b;
	char* p = b;
	printf("string a is %s\nstring b is %s\n", a, p);
	copy(a, p);
	printf("after copy\n");
	printf("string a is %s\nstring b is %s\n", a, p);
}

/*void copy(char* from, char* to) {
	for (; *from != '\0'; from++, to++) {
		*to = *from;
	}
	*to = '\0';
}*/
void copy(char* from, char* to) {
	while ((*to = *from) != '\0') {
		to++;
		from++;
	}
	//*to = '\0';
}