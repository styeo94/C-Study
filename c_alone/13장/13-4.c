#include <stdio.h>

struct student {
	char name[10];
	int age;
	double height;
} st[5] = {
	{"이창현", 25, 178.5},
	{"이주성", 8, 125.8},
	{"송유흠", 11, 145.5},
	{"김민준", 11, 146},
	{"김민성", 11, 146.3},
};

int main() {
	int i;

	printf("st[i] 구조체 멤버의 초기값 출력\n");
	printf("st의 크기 : %ld\n", sizeof(st));
	printf("st의 배열크기 : %ld\n", sizeof(st)/sizeof(st[0]));
	for (i = 0; i < sizeof(st)/sizeof(st[0]); i++) {
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name,  st[i].age,  st[i].height);

		//연습삼아 몇번 더!
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name, st[i].age,st[i].height);
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name, st[i].age,st[i].height);
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name, st[i].age,st[i].height);
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name,st[i].age, st[i].height);
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name,st[i].age,st[i].height);
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name,st[i].age,st[i].height);
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name,st[i].age,st[i].height);
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name,st[i].age,st[i].height);
	}

	st[2].height = 146;
	printf("\nst[2] 구조체 멤버의 데이터 변경\n");
	printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[2].name, st[2].age,st[2].height);

	return 0;
}
