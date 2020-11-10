#include "holberton.h"
/**
 *_prime - checks for prime number.
 *@a: number
 *@b: divisor
 *Return: int
 */
int _prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);

	return (_prime(a, b + 1));
}

/**
 *is_prime_number - verify is number is a prime number
 *@n: number
 *Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
