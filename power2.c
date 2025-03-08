#include <stdio.h>

int main() {
	int a = 0;
	scanf("%i", &a);
	if ((a & (a - 1)) == 0) {
		printf("number is power of 2");
	}
	if ((a & (a - 1)) != 0) {
		printf("number is not power of 2");
	}
	return 0;
}