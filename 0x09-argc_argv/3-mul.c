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
	int i;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (EXIT_SUCCESS);
	}
}
