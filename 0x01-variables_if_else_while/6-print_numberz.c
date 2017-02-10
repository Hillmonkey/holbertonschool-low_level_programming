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
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}
