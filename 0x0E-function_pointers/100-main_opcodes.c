#include <stdio.h>
#include <stdlib.h>

/**
 * main - print out byte codes of itself
 * @argc: number of args
 * @argv: array of argument strings
 * Return: int ... 0 = success, other numbers otherwise
 **/

int main(int argc, char *argv[])
{
	int (*f)(int, char**);
	int i;
	int num_bytes;
	char *byte;

	f = main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		byte = (unsigned char *)*(f + i);
		printf("%x", *byte & 0xff);
		if (i == num_bytes - 1)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
