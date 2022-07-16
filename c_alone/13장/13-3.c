#include <stdio.h>

struct student {
	char name[10];
	int age;
	int height;
} st = {"이창현", 25, 178};

int main() {
	printf("이름 = %s, 나이 =%d, 키 = %d\n", st.name, st.age, st.height);

	return 0;
}
