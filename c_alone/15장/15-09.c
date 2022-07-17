#include <stdio.h>

/*
	파일 위치 지시자 함수의 원형
	int fseek(FILE *stream, logn int offset, int orgin);

	죽는 날까지 하늘을 우러러 한 점 부끄럼 없기를, 잎새에 이는 바람에도 나는 괴로워했다.
	0,1,2	3,4,5	6	7,8,9	10,11,12	13,14,15	16		17,18,19	20,21,22	23,24,25	26
	죽		는	    _	날		까			지			_		하			늘			을			_	

	※이번 위치를 조사해 보니, 한글은 3byte를 먹는 것 같음.
*/
int main() {

	FILE *file;
	char buf[256];

	file = fopen("temp2.txt", "rt");

	if(file != NULL){
		fseek(file, 21, SEEK_SET);
		fgets(buf, 256, file);
		printf("%s\n\n", buf);
		fclose(file);
	}

	return 0;
}
