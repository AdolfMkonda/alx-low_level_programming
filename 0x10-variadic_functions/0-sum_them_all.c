#include "variadic_functions.h"
/**
 * sum_them_all - program that find sum of all arguments
 * @n: number of argumrnts
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i = 0;
	va_list args;
	int num;

	if (n == 0;)
		return (0);
	va_start (args, n);
	while (i < n)
	{
		num = va_arg(args, int);
		total += num;
		i++;
	}
	va_end(args);
	return (total);
}
