#include <stdio.h>

/*  구조체 사용 예제 */

int main() {


	struct person {
		char *name;
		int age;
		char *address;
		double height;
	};

	struct person p1, p2;

	struct person *ptr;

	p1.age = 20;
	p1.height = 175.8;
	p1.name = "이몽룡";
	p1.address = "서울시 서대문구 홍은 3동";
	printf("p1내의 이름 =%s\n", p1.name);
	printf("p1내의 나이 =%d\n", p1.age);
	printf("p1내의 신장 =%f\n", p1.height);
	printf("p1내의 주소 =%s\n\n", p1.address);

	p2.age = 18;
	p2.height = 158.8;
	p2.name = "성춘향";
	p2.address = "전남 남원시 광한루 ";
	printf("p2내의 이름 =%s\n", p2.name);
	printf("p2내의 나이 =%d\n", p2.age);
	printf("p2내의 신장 =%f\n", p2.height);
	printf("p2내의 주소 =%s\n\n", p2.address);

	ptr = &p1 ;
	ptr->age = 20;
	ptr->height = 175.8;
	ptr->name = "이몽룡";
	ptr->address = "서울시 서대문구 홍은 3동";

	printf("포인터를 이용하여 내용 출력 \n");
	printf("p1내의 이름=%s\n", ptr->name);
	printf("p1내의 나이=%d\n", ptr->age);
	printf("p1내의 신장=%f\n", ptr->height);
	printf("p1내의 주소=%s\n\n", ptr->address);

	ptr = &p2;

	printf("p2내의 이름=%s\n", ptr->name);
	printf("p2내의 나이=%d\n", ptr->age);
	printf("p2내의 신장=%f\n", ptr->height);
	printf("p2내의 주소=%s\n", ptr->address);

	return 0;
}
