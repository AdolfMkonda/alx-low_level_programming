#include "main.h"
/**
 * _isupper - program that checks for uppercase character
 * @c: character to be chacked
 * Return: 0 or otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
