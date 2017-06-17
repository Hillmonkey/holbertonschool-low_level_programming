#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
=======

>>>>>>> 3b3d123d82dbb2712cfcb9d5bae8d51c15f71c25
/**
 * main - accepts input to decide what type of arithmetic function to call
 * @argc: int representing # of command line args
 * @argv: an array of strings, passed to main at the command line
 * Return: int, being product of operator on ints a & b
 **/
int main(int argc, char *argv[])
{

	int a;
<<<<<<< HEAD
=======
	/* long int b, c; */
	/* char *endptr; */
>>>>>>> 3b3d123d82dbb2712cfcb9d5bae8d51c15f71c25

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
<<<<<<< HEAD
	a = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
=======
	/* b = strtol(argv[1], &endptr, 10); */
	/* c = strtol(argv[3], &endptr, 10); */
	a = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	/* a = (*get_op_func(argv[2]))(b, c); */
>>>>>>> 3b3d123d82dbb2712cfcb9d5bae8d51c15f71c25
	printf("%d\n", a);
	return (0);
}
