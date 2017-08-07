#include "holberton.h"

/**
 * _strcmp - Compares two strings per spec's @ man strcmp
 * @s1: string 1 for comparison
 * @s2: 2nd string for comparison
 * Return: int, equivalent to s1[n] - s2[n], where n is the
 *   first element where the two strings differ
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while  (s1[i] == s2[i] && (s1[i] != 0 && s2[i] != 0))
		i++;
	return (s1[i] - s2[i]);
}
