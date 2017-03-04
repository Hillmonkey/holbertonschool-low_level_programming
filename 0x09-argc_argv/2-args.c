#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints number of arguments passed in
 * @argc: int value representing number of arguments passed in
 * @argv: pointer to an array of pointers to strings that
 *        contain arguments passed in
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i = 1;

	while (--argc)
		printf("%s\n", *argv++);
		i *= atoi(*argv++);
	return (EXIT_SUCCESS);
}
