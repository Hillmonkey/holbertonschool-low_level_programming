#include <stdio.h>

/**
 * print_args - arg
 * @ac: int
 * @av: array of strings
 * Return: zero
 **/
int print_args(int ac, char *av[])
{
	int i = 0;

	for (i = 0; i < ac; i++)
		printf("argc[%d] --> %s\n", i, av[i]);
	return (0);
}


