#include <stdio.h>

int main() {
	int k;

	for (int i = 0 ; i < 10; i += 2){
		if (i > 5) 
			k = 8 -i;
		else
			k = i;

		for (int j = 5-k; j > 0 ; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
