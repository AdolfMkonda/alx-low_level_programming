#include "function_pointers.h"
/**
 * array_iterator - a program that iterate an array
 * @array: array to be iterated
 * @size: size of an array
 * @action: action to be done to an array
 * Return: 0:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
