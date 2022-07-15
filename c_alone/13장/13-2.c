#include <stdio.h>
#include <string.h>

struct student{
	char name[10];
	int age;
	int height;
} st, *pSt;

int main() {

	// pSt->name 의 표현은 (*pSt).name 과 같은 표현!

	pSt = &st;
	strcpy(pSt->name, "이창현");
	pSt->age = 25;
	pSt->height = 178;

	printf("이름 = %s, 나이 = %d, 키 = %d\n", pSt->name, pSt->age,
			pSt->height);

	return 0;
}
