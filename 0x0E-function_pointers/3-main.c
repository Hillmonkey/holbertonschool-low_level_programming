#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - accepts input to decide what type of arithmetic function to call
 * @argc: int representing # of command line args
 * @argv: an array of strings, passed to main at the command line
 * Return: int, being product of operator on ints a & b
 **/
int main(int argc, char *argv[])
{

	int a;

	if (argc != 4)
	{
		printf("error\n");
		exit(98);
	}
	a = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", a);
	return (0);
}
