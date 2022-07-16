#include <stdio.h>

int g_a;
int g_b;

int f1(int c);
int f2(int d);

int main() {
	int h = 10;
	g_a = f1(h);
	g_b = f2(h);
	printf("g_a = %d, g_b = %d\n", g_a, g_b);
	
	return 0;
}

int f1(int c) {
	int e = 10;
	return e + c;
}

int f2(int d) {
	int f = 20;
	return f + d;
}
