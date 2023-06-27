#include "main.h"
/**
 * print_alphabet_x10 - program that print alphabet in lowercase *10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
