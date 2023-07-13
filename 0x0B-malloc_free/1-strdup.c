#include "main.h"
#include <stdlib.h>
/**
 * _strdup - program that return pointer to new allocated memory
 * @str: source string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int c = 0;

	if (str == NULL)
		return (NULL);
	while (str[c])
		c++;
	s = malloc(sizeof(char) * (c + 1));
	if (s == NULL)
		return (NULL);
	while ((s[i] = str[i]) != '\0')
		i++;
	return (s);
}
