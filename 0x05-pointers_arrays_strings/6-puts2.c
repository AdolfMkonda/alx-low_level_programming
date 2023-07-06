#include "main.h"
/**
 * puts2 - program that print only one character out of two
 * @str: input
 */
void puts2(char *str)
{
	int count = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		count++;
	}
	t = count - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
