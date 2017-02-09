#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints out size in bytes of various variable types
 * This can be run with a 32 bit compiler and a 64 bit compiler
 * for extra insight!
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char myChar;
	int myInt;
	long int myLongInt;
	long long int myLongLongInt;
	float myFloat;

	printf("Size of a char: %i byte(s)\n", sizeof(myChar));
	printf("Size of an int: %i byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %i byte(s)\n", sizeof(myLongInt));
	printf("Size of a long long int: %i byte(s)\n", sizeof(myLongLongInt));
	printf("Size of a float: %i byte(s)\n", sizeof(myFloat));

	return (0);
}
