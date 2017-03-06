#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints all arguments passed in
 * @argc: int value representing number of arguments passed in
 * @argv: pointer to an array of pointers to strings that
 *        contain arguments passed in
 * Return: 0 for success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
