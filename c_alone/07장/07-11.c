#include <stdio.h>

int main() {

	/*
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	*/

	
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	

	/*
	int arr[2][3] = {1,2,3,4,5,6};
	*/
	
	printf("2차원 배열 값의 출력 결과\n");
	printf("=========================\n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0 ; j < 3; j++){
			printf("%d	", arr[i][j]);
		}

		printf("\n");
	}

	printf("=========================\n");

	return 0;
}
