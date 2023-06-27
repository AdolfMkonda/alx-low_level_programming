#include "main.h"
/**
 * print_to_98 - numbers from n to 98
 * @n: start point number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
				break;
			}
	else
	{
		printf(n + '0');
	}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n +'0');
			}
		}
	}
}
