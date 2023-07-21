#include "variadic_functions.h"
/**
 * sum_them_all - program that find sum of all arguments
 * @n: number of argumrnts
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	int i;
	va_list args;
	int num;

	if (n == 0;)
		return (0);
	va_start (args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args int);
		total += num;
	}
	va_end(args);
	return (total);
}
