#include "holberton.h"

/**
 * is_char_digit - determines if ascii char is a character
 * @c: char to be evaluated
 * Return: char passing boolean state:  0=false, 1=true
 */
char is_char_digit(char c)
{
	int ret;

	if (c >= 65 && c <= 90)
		ret = 1;
	else if (c >= 97 && c <= 122)
		ret = 1;
	else if (c >= 48 && c <= 57)
		ret = 1;
	else
		ret = 0;
	return (ret);
}

/**
 * to_upper - if an ascii value is a lower, convert to upper
 * @c: char to be converted to upper, if appropriate
 * Return: char that has been capitalized, if appropriate
 */
char to_upper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/**
 * is_delimiter - if ascii value is a delimiter, tests true
 * @c: char to test for "is-delimiter" status
 * Return: char passing boolean state: 0=false, 1=true
 */
char is_delimiter(char c)
{
	int ret = 0;

	if (c == 32 || c == 9 || c == 10 || c == 44 || c == 59 || c == 46)
		ret = 1;
	else if (c == 33 || c == 63 || c == 40 || c == 41 || c == 123 || c == 125)
		ret = 1;
	return (ret);
}

/**
 * cap_string - capitolizes all words of a string
 * @s: string that needs capitolization
 * Return: pointer to beginning of updated string
 */
char *cap_string(char *s)
{
	char newWord = 1;
	int i = 0;

	/* while not null char */
	while (s[i] != 0)
	{
		/* find start of new word */
		if (newWord  && is_char_digit(s[i]))
		{
			s[i] = to_upper(s[i]);
			newWord = 0;
		}
		/* find next delimiter */
		if (!newWord)
			newWord = is_delimiter(s[i]);
		i++;
	}
	return (s);
}
