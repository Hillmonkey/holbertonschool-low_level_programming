#include "holberton.h"
/**
 **rec_root - returns the natural square root of a number.
 **@i: incremented potential natural root
 **@n: int - number that we are trying to find the root of
 **Return: natural root, or -1 if no natural root exists
 **/

int rec_root(int i, int n)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	else
		return (rec_root(i + 1, n));
}


/**
 **_sqrt_recursion - returns the natural square root of a number.
 **@n: number that we are trying to find the root of
 **Return: int - natural root, or -1 if no natural root exists
 **/


int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	return (rec_root(i, n));
}
