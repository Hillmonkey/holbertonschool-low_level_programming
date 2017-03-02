#include "holberton.h"
/**
 **my_prime - recursively determine if number is prime, passes 1 if prime,
 ** else 0
 **@i: int to increment to see if it divides cleanly into n
 **@n: int to be checked if it is prime
 **Return: int - 1 is prime, or 0 if not prime
 **/

int my_prime(int i, int n)
{
	if (n % i == 0)
		return (0);
	else if ((i * i) > n)
		return (1);
	else
		return (my_prime(i + 1, n));
}


/**
 **is_prime_number - returns 1 if n is prime, 0 otherwise
 **@n: number n to check for "prime-ness"
 **Return: int, 1 or 0 as per above
 **/

int is_prime_number(int n)
{
	int i;
	i = 2;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (my_prime(i, n));
}
