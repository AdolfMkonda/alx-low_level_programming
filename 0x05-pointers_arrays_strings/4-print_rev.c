#include "main.h"
/**
 * print_rev - program that print string in rev
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while(*s != '\0')
	{
		c++;
		s++;
	}
	s--;
	for (i = c; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
