#include "main.h"
/**
 * rev_string - program that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int c = 0;
	int i;

	while(*s != '\0');
	{
		c++;
		s++;
	}
	s--;
	for (i = c; i > 0; i--;)
	{
		s--;
	}
}
