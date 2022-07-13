#include <stdio.h>

int main() {
	int a;
	int *p;
	int **pp;

	a = 100;
	p = &a;
	pp = &p;

	printf("a의 주소값 &a : %p\n", &a);
	printf("p의 값 : %p\n", p);
	printf("*p의 값 : %d\n\n", *p);

	printf("pp의 주소값 : %p\n", pp);
	printf("*pp의 값 : %p\n", *pp);
	printf("**pp의 값 : %d\n\n", **pp);
	
	return 0;
}
