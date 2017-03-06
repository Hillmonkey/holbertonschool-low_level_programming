#include<stdio.h>
#include<stdlib.h>

/**
 * main - returns first parameter passed at command line
 * @argc: number of variables passed at command line
 * @argv: pointer to a list of pointers, that are at heads of strings
 * Return: int (zero) on success
 */

int main(int argc, char **argv)
{
	argc = 0;
	printf("%s\n", *(argv + argc));
	exit(EXIT_SUCCESS);
}
