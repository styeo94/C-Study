#include <stdio.h>

int main() {
	int a, b;

	/*증가연사자가 변 수 앞에 있을 때 */
	a = 5;
	b = ++a;
	printf("b=%d\n", b);
	/*증가연사자가 변 수 뒤에 있을 때 */
	a = 5;
	b = a++;
	printf("b=%d\n", b);
	/*감소연사자가 변 수 앞에 있을 때 */
	a = 5;
	b = --a;
	printf("b=%d\n", b);
	/*감소연사자가 변 수 뒤에 있을 때 */
	a = 5;
	b = a--;
	printf("b=%d\n", b);

	return 0;
}
