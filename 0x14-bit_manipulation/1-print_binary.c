#include "main.h"
/**
 * print_binary - the program that Prints the binary of a number.
 * @n: The number to be converted to binary...
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
