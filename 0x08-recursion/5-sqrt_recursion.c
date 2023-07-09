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
	return (actual_sqrt_recursion(n, 0));
}
