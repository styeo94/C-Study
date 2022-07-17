#include <stdio.h>

#define SIZE 5

int main() {
	
	char str[SIZE] = "Love";
	int i;

	for ( i = 0; i < SIZE; i++){
		printf("배열의 요소 %d는 %c\n", i, str[i]);
	}

	return 0;
}
