#include "main.h"
/**
 * get_endianness - program that Checks the endianness.
 * Return: 0 else 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
