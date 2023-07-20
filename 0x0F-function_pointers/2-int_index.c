#include "function_pointers.h"
/**
 * int_index - program that return operation btn numbers
 * @array: array of numbers
 * @size: array size
 * @cmp: point fx to code
 * Return: 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
