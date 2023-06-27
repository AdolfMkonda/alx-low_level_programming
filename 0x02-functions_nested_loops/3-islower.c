#include "main.h"
/**
 * _islower - program that check if a character is lowercse
 * @c: character to be chacked
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
