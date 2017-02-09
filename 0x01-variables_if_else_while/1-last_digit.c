#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 1-last_digit.c
 *
 * Description:
 * This program prints
 * a randomly generated number, n
 * and outputs a string indicating
 * whether the last digit of n is greater
 * than 5, is zero, or otherwise
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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	printf("Last digit of %i is %i ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
