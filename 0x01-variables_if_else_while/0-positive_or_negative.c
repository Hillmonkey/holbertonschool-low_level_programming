#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 0-positive_or_negative.c
 *
 * Description:
 * This program prints
 * a randomly generated number
 * and outputs a string indicating
 * if it is positive, negative, or zero
 *
 */

/**
  * main - this is the main function that runs everything
  * @void: no arguments passed in
  *
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
