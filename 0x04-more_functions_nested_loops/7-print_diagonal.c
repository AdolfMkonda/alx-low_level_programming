#include "main.h"
/**
 * print_diagonal - program that print diagonal line
 * @n: number of empty spaces
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i <= n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
