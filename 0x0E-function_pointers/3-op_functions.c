#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a to b
 * @a: an int
 * @b: another int
 * Return: int - sum of a & b
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: an int
 * @b: another int
 * Return: int - a minus b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a times b
 * @a: an int
 * @b: another int
 * Return: int - product of a & b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: an int
 * @b: another int
 * Return: int -result of a / b; if b = 0; exit status = 100, print "Error"
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of a div b
 * @a: an int
 * @b: another int
 * Return: int - remainder of a div b, if b = 0, exit status = 100, print
 *               "Error:
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
