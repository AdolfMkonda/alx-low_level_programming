#include "main.h"
/**
 * _memset - a program that fills memory with constant byte
 * @s: pointer to pointer
 * @b: constant memory
 * @n: the first n
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
