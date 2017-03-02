#include "holberton.h"
/**
 *factorial - returns the factorial of a given number
 *@n: n in n! = factorial(n)
 *
 **Return: factorial(n)
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
