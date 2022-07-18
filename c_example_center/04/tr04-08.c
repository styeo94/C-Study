#include <stdio.h>

/* 증감연산자를 이용하여 출력을 구하는 프로그램 */
int main() {

	int x, n_x, y, n_y;

	x = 0;
	n_x = ++x;
	printf("n_x=%d, x=%d\n", n_x, x);

	y = 0;
	n_y = y++;
	printf("n_y=%d, y=%d\n", n_y, y);

	x = 0;
	n_x = --x;
	printf("n_x=%d, x=%d\n", n_x, x);

	y = 0;
	n_y = y--;
	printf("n_y=%d, y=%d\n", n_y, y);

	x = 0;
	x += 10;
	printf("x=%d\n", x);

	y = 0;
	y += (y+1);
	printf("y=%d\n", y);

	return 0;
}

