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
	int i = *argv - *argv;

	printf("%d\n",  argc + i - 1);
	exit(EXIT_SUCCESS);
}
