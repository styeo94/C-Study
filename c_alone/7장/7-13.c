#include <stdio.h>

int main() {

	int total = 0;
	int arr[2][3] = {
		{1,},
		{4,5,6}
	};

	for (int i = 0 ; i < 2; i++){
		for (int j = 0; j < 3; j++){
			total = total + arr[i][j];
		}
	}

	printf("배열 요소의 총 합은 = %d\n", total);

	return 0;
}
