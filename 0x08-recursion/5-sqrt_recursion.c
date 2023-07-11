#include "main.h"
/**
 *  _sqrt_recursion - rec program that return square root of the number
 *  @n: number
 *  Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n));
}

/**
 * _sqrt - program that return sqrt
 * @n: base
 * @m: root
 * Return: 0
 */
int _sqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (sqrt(n, m + 1));
}
