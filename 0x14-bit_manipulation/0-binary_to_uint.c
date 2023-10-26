#include "main.h"
/**
 * binary_to_uint - program that converts a binary number to unsigned int
 * @b: binary
 * Return: 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uni;
	int len, dec;

	if (!b)
		return (0);
	uni = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, dec = 1; len >= 0; len--, dec *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			uni += dec;
	}
	return (uni);
}
