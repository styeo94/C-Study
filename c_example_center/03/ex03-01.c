#include <stdio.h>

#define VALUE 80

int main(){

	int a;
	short b;
	long c;
	char d;
	float e;
	double f;

	a = 10;
	b = VALUE;
	c = 700000;
	d = 'A';
	e = -3.14;
	f = 5.6e-5;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%ld\n", c);
	printf("d=%c\n", d);
	printf("e=%f\n", e);
	printf("f=%g\n", f);

	return 0;
	
}
