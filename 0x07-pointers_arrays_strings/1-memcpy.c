#include "main.h"
/**
 * _memcpy - program that copies n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of byte to be copied
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
