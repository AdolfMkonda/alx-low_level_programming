#include "main.h"
/**
 * factorial - program that return factorial of a number
 * @n: number
 * Return: -1 below zero else factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
}
