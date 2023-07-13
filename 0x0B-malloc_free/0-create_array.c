#include "main.h"
#include <stdlib.h>
/**
 * create_array - program that create an array
 * @size: size of char
 * @c: character
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(s + 1) = c;
	}
	*(s + 1) = '\0';
	return (s);
}
