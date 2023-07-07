#include "main.h"
/**
 * puts_half - program to print even number stings
 * @str: character to be printed
 */
void puts_half(char *str)
{
	int c = 0;
	int i;
	int s;

	while (*str != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
		s = c / 2;
	s = ((c + 1) / 2);
	for (i = s; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\0');
}
