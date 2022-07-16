#include <stdio.h>
#include <string.h>

struct student {
	char name[10];
	int age;
	int height;
} st1;

int main() {

	strcpy(st1.name, "이창현");
	st1.age = 25;
	st1.height = 178;

	printf("이름 = %s, 나이 = %d, 키 = %d\n", st1.name, st1.age, st1.height);

	return 0;
}
