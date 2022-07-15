#include <stdio.h>
#include <stdlib.h>

int main() {

	char ch;
	fputs("맞으면 'y'를 또는 'Y'를, 틀리면 'n' 또는 'N'을 눌러주세요 : ",
			stdout);
	scanf("%c", &ch);

	switch(ch) {
		case 'Y':
		case 'y':
			puts("승인되었습니다.");
			break;
		case 'N':
		case 'n' :
			puts("취소하였습니다.");
			break;
	}

	return 0;
}
