#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	argc = 0;
	printf("%s\n", *(argv + argc));
	exit(EXIT_SUCCESS);
}
