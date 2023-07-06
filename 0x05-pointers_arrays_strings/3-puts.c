#include "main.h"
/**
 * _puts - program that print string in std out
 * @str: strint to be printed
 */
void _puts(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
