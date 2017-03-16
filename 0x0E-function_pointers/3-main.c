#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	
	int a;
	
	printf("2argc = %d\n", argc);
	if (argc != 4)
	{
		printf("argc = %d\n", argc);
		printf("error-A-\n");
		exit (98);
	}
	a = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", a);
	return (0);
}
