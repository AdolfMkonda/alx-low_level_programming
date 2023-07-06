#include "main.h"
/**
 * _strlen - program that count characters
 * @s: characters to be counted
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
	}
	return (c);
}
