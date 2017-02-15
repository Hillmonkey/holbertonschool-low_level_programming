#include <stdio.h>

/** main - prints sum of numbers from 1 to 1024 that are divisible by 3 or 5,
  * Return: void
  */

int main(void)
{
	int sum = 0;
	int i = 0;

	for (i = 1; i <= 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	printf("%i\n", sum);
	return (0);
}
