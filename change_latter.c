#include <stdio.h>

int main(){
	char c=0;
	scanf(" %c",&c);
	char s = c ^ 32;
	printf("%c",s);
	return 0;
}