#include "main.h"
/**
 * _strchr - program that locate character in a string
 * @s: string
 * @c: char to be located
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
