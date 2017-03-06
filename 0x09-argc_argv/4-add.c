#include<stdio.h>
#include<stdlib.h>
/**
 * main - adds positive numbers and prints result
 *        no numbers passed? print 0+ NewLine
 *        any arg passed in contains non-digits? print Error, and return 1
 * @argc: int value for # of values passed in
 * @argv: pointer to an array of strings
 * Return: int (1 if error, 0 otherwise (2nd part is my interpretation)
 */
int main(int argc, char *argv[])
{
	long sum = 0;
	int i;
	char *endptr;

	if (argc == 1)
		puts("0");
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum  += strtol(argv[i], &endptr, 10);
			if (*endptr != '\0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	printf("%ld\n", sum);
	return (0);
}
