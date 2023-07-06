#include "main.h"
/**
 * _puts - program that print string in std out
 * @str: strint to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
