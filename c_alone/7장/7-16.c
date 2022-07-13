#include <stdio.h>

int main() {
	int i, j, total = 0, avg = 0;
	int arr1[3][3];
	int arr2[5][3];
	
	for(i = 0; i<3; i++) {
		if (i == 0)
			printf("영구의 국어, 수학, 영어 점수 입력 : ");
		else if (i == 1)
			printf("맹구의 국어, 수학, 영어 점수 입력 : ");
		else	
			printf("빡구의 국어, 수학, 영어 점수 입력 : ");

		for (j = 0 ; j < 3 ; j ++) {
			scanf("%d", &arr1[i][j]);
			arr2[i][j] = arr1[i][j];
		}
	}


	for (i = 0 ; i < 3; i++) {
		for (j = 0 ; j < 3; j++) {
			total += arr2[i][j];
		}
		
		arr2[j][i] = total;
		arr2[j+1][i] = total/3;
		total = 0;
	}

	printf("==============================\n");
	printf("\t영구\t맹구\t빡구\n");

	for (i = 0; i < 5; i++){
		if (i == 0)
			printf("국어\t");
		else if (i == 1)
			printf("영어\t");
		else if (i == 2)
			printf("수학\t");
		else if (i == 3)
			printf("총점\t");
		else if (i == 4)
			printf("평균\t");

		for (j = 0; j<3;j++){
			if(i < 3)
				printf("%d\t", arr2[j][i]);
			else
				printf("%d\t", arr2[i][j]);
		}
		printf("\n"); 
	}

	printf("==============================\n");

	return 0;
}
