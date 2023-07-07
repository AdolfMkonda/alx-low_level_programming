#include "main.h"
/**
 * _strcat - a program to copy string
 * @src: source string
 * @dest: destination string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count;
	int s;

	for (i = 0; src[i] != '\0'; i++)
	{
		count++;
	}
	for (s = 0; s < count; s++)
	{
		dest[s] = src[s];
	}
	dest[count] = '\0';
	return (dest);
}
