#include "holberton.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 *@s: arg
 *
 *Return: value
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	i = (_strlen_recursion(s + 1));
		return (i + 1);
}


/**
 *first_is_last - recursively compare first & last digit of string
 *@first: arg
 *@last: arg
 *Return: value
 **/

int first_is_last(char *first, char *last)
{
	if (*first != *last)
		return (0);
	else if (first >= last)
		return (1);
	else
		return (first_is_last(first + 1, last - 1));

}


/**
 *is_palindrome - 1 if a string is a palindrome and 0
 *@s: arg
 *Return: value
 **/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *first;
	char *last;

	first  = s;
	last = (s + len - 1);
	return (first_is_last(first, last));
}
