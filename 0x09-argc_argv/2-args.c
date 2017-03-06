#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints all arguments passed in
 * @argc: int value representing number of arguments passed in
 * @argv: pointer to an array of pointers to strings that
 *        contain arguments passed in
 * Return: 0 for success
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	while (argc--)
		printf("%s\n", *argv);
	return (EXIT_SUCCESS);
}
