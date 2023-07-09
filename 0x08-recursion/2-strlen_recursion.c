#include "main.h"
/**
 * program - that return legnth of the string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	
	while (*s != '\0')
	{
		i++;
	}
	return (i += _strlen_recursion(s + 1))
}
