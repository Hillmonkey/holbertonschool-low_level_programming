#include <stdio.h>
int main(void) {
	char c[] = {1, 2};
	printf("%p\n", &c[0]);
	printf("%p\n", &0[c]);
	return(0); }
