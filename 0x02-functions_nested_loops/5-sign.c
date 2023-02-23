#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: the int to chek
 * Return: 1 for V+ else V-
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
