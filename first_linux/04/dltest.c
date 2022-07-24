#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

/* 그동안 내가 짜본 C 코드 중 가장 어렵다. 꼭 이렇게 동적 라이브러리를 구사해야할 이유가 뭐지?*/

int main() {
	void *handle;
	int (*max)(int, int), (*min)(int, int);
	char *error;

	handle = dlopen("./lib/libtest.so", RTLD_LAZY);

	if (!handle) {
		fputs(dlerror(), stderr);
		exit(1);
	}

	max = dlsym(handle, "max");

	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}

	min = dlsym(handle, "min");

	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}

	printf("max(1,2) = %d\n", (*max)(1,2));
	printf("min(1,2) = %d\n", (*min)(1,2));

	dlclose(handle);

	return 0;
}
