#include "main.h"
/**
 * get_bit - program that obtain the value of a bit at a given index.
 * @n: The bit to be obtained
 * @index: The index to get the value at - indices start at 0
 * Return: bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
