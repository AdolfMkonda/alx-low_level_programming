#include "main.h"
/**
 * binary_to_uint - program that converts a binary number to unsigned int
 * @b: binary
 * Return: 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int index = 0;

	result = 0;

	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		char currentChar = b[index];

		if (currentChar == '0')
		{
			result = (result << 1);
		}
		else if (currentChar == '1')
		{
			result = (result << 1) | 1;
		}
		else
			return (0);
		index++;
	}
	return (result);
}
