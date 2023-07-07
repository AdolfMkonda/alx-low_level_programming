#include "main.h"
/**
 * _strncat - program that join two strings
 * @src: source
 * @dest: destination
 * @n: count
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int dc;
	int i;

	while(dest[dc] != '\0')
	{
		dc++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dc + 1] = src[i];
	}
	return (dest);
}
