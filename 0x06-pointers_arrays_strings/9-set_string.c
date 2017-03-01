#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char 
 * @to: pointer to a char
 * Returns: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
