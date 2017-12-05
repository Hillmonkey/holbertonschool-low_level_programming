#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;
	/*            123456		 1      123456789       123456 */	
	/*            01234567890123456789012345678901234567890123 */
    tab = strtow("      Holberton School         #cisfun      ");

    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
	tab = strtow("write, printf, putchar, puts, malloc, free");
    return (0);
}
