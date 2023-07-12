#include "main.h"
/**
 * _memset - program that fill memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
