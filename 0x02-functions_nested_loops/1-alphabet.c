#include "main.h"
/**
 * main - program that contain function to print alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int c;

	c = 0;
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
