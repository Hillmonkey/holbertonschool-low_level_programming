#include <stdio.h>

int main(void) {
	char c[] = {1, 2};
	printf("%ld\n", &c[0]);
	printf("%ld\n", &0[c]);
	return(0); }
