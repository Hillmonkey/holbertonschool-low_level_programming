#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {1, 2, 3, 4}; /* array of integers */
	char c[] = {'a', 'b', 'c'}; /* array of chars */
	float f[] = {1.2, 3.45, 6.789}; /* array of floats */

	printf("Size of array of 4 ints is %lu\n", sizeof(a));
	printf("Size of array of 3 chars is %lu\n", sizeof(c));
	printf("Size of array of 3 floats is %lu\n", sizeof(f));

	printf("*(a + 0) = %d\t\t", *(a + 0));
	printf("*a = %d\t\t", *a);
	printf("a[0] = %d\n", a[0]);

	printf("*(c + 0) = %c\t\t", *(c + 0));
	printf("*c = %c\t\t", *c);
	printf("c[0] = %c\n", c[0]);

	printf("*(f + 0) = %.3f\t", *(f + 0));
	printf("*f = %.3f\t", *f);
	printf("f[0] = %.3f\n", f[0]);
	printf("\n");

	printf("*(0 + a) = %d\t\t", *(0 + a));
	printf("0[a] = %d\n", 0[a]);
	printf("*(0 + c) = %d\t\t", *(0 + c));
	printf("0[c] = %d\n", 0[c]);
	printf("*(0 + f) = %d\t\t", *(0 + f));
	printf("0[f] = %d\n", 0[f]);
}
