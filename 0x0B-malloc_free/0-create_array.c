#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The char to initialize each element of the array with.
 *
 * Return: If size = 0 or fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;

	if (size > 0)
	{
		arr = (char *) malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (unsigned int i = 0; i < size; i++)
			{
				arr[i] = c;
			}
		}
	}

	return arr;
}
