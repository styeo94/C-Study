#include <stdio.h>

/* typedef 사용 예제 */

typedef char * PSTR;
typedef int COUNT;
typedef int matrix[2][2];

int main() {

	PSTR pnt;
	PSTR pnt2;
	COUNT r, c, cnt;
	matrix arr;

	pnt = "여기 내용은 새로운 데이터 PSTR형의 데이터 pnt에 들어간다";
	pnt2 = "다른 걸 쓸 수 있는 지 확인 중";
	cnt = 4;
	for (r=0; r<2; r++)
		for (c=0; c<2;c++){
				arr[r][c] = cnt++;
				printf("arr[%d][%d] = %d \n", r, c, arr[r][c]);
		}

	printf("%s\n", pnt);
	printf("%s\n", pnt2);
	return 0;
}
