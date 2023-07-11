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
	return (asqrt(n));
}

/**
 * _sqrt - program that return sqrt
 * @n: base
 * @m: root
 * Return: 0
 */
int asqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (asqrt(n, m + 1));
}
