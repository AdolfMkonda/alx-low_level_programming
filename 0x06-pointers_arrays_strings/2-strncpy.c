#include "main.h"
/**
 * _strncpy - program that copy strings
 * @src: source string
 * @dest: destnation sting
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
