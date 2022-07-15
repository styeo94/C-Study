#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char ch;
	fputs("맞으면 'y'를 또는 'Y'를, 틀리면 'n' 또는 'N'을 눌러주세요 : ",
			stdout);
	scanf("%c", &ch);

	switch(tolower(ch)){
		case 'y':
			puts("승인 되었습니다.");
			break;
		case 'n':
			puts("취소 하였습니다.");
			break;
	}

	return 0;
}
