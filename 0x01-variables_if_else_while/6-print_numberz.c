#include <time.h>
#include <stdio.h>
/*
 * 6-print_numberz.c
 *
 * Description:
 * This program prints
 * all the base 10 digits in order
 * using putchar()
 * No vars of type char ...
 */

/**
  * main - this is the main function that runs everything
  * @void: no arguments passed in
  *
  * Return: 0
  */
int main(void)
{
	int letter;
	int i;

	letter = 48;

	for (i = 0; i < 10; i++)
		putchar(letter + i);
	putchar('\n');
	return (0);
}
