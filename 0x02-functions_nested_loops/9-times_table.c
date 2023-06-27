#include "main.h"
/**
 * times_table - program that print table 9
 */
void times_table(void)
{
	int i;
	int j;
	int z;
	int u;
	int b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = j * i;
			if (z > 9)
			{
				u = z % 10;
				b = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
