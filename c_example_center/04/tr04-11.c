#include <stdio.h>

int main() {

	int a, b, c;

	a = 0xf2; /* 4바이트 00000000 00000000 00000000 11110010 */
	b = 0x45; /* 4바이트 00000000 00000000 00000000 01000101 */

	c = ~a; /*비트단위 보수 */
	printf("~a=%x\n", c);
	
	c = a & b; /*비트단위 AND */
	printf("a & b=%x\n", c);

	c = a | b; /*비트단위 OR */
	printf("a | b=%x\n", c);

	c = a ^ b; /*비트단위 XOR */
	printf("a ^ b=%x\n", c);

	c = a >> 2; /*비트단위 2비트 왼쪽으로 이동 */
	printf("a >> 2=%x\n", c);

	c = a << 4; /*비트단위 4비트 오른쪽 이동 */
	printf("a << 4=%x\n", c);

	return 0;
}
