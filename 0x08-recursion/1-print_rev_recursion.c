#include "main.h"
/**
 * _print_rev_recursion - program that print string in rev
 * @s: strint to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
