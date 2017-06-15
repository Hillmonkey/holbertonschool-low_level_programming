#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int print_args(int ac, char *av[])
{
	int i = 0;

	for (i = 0; i < ac; i++)
		printf("argc[%d] --> %s\n", i, av[i]);
	return (0);
}


/**
 * main - accepts input to decide what type of arithmetic function to call
 * @argc: int representing # of command line args
 * @argv: an array of strings, passed to main at the command line
 * Return: int, being product of operator on ints a & b
 **/
int main(int argc, char *argv[])
{

	int a;
	long int b, c;
	char *endptr;

	if (argc != 4)
	{
		printf("Error\n");
		/* print_args(argc, argv); */
		exit(98);
	}
	b = strtol(argv[1], &endptr, 10);
	c = strtol(argv[3], &endptr, 10);
	/* a = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])); */
	a = (*get_op_func(argv[2]))(b, c);
	printf("%d\n", a);
	return (0);
}
