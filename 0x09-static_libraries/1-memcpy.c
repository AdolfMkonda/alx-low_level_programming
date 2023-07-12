#include "main.h"
/**
 * _memcpy - a program function that copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;
	
	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
