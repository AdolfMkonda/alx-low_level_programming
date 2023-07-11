#include "main.h"
/**
 * is_prime_number - rec program that checks for prime number
 * @n: number
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n));
}

/**
 * _prime - program that return prime numbers
 * @n: prime
 * @m: divisor
 * Return: 0
 */
int _prime(int n, int m)
{
	if (n % m == 0)
		return (0);
	if (m == 1)
		return (1);
	return (_prime(n, m - 1));
}
