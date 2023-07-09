#include "main.h"
/**
 * is_prime_number - rec program that checks for prime number
 * @n: number
 * Return: 1
 */
int is_prime_number(int n)
{
	int m;

	if (n <= 1)
		return (0);
	if (n % m == 1 || n % 1 == 1)
		return (is_prime_number(n, m - 1));
}
}
