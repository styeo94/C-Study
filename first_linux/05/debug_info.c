/*
   5장 디버깅과 오류 처리
   파일이름 : debug_info.c
*/

#include <stdio.h>

int main() {

#ifdef DEBUG
	printf("이 프로그램은 " __DATE__ " 일 " __TIME__ "에 컴파일되었습니다.\n");
	printf("여기는 %s 파일의 %d 번째 줄입니다.\n", __FILE__, __LINE__);
#endif

	printf("Hello, World\n");
	
	return 0;
}
