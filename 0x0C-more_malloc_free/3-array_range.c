#include "main.h"
#include <stdlib.h>
/**
 * array_range - program that list min to max
 * @min: minimum
 * @max: maximum
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i = 0;
	int j;
	int *p;

	if (min > max)
		return (NULL);
	j = max - min;
	p = malloc((sizeof(int) * j) + sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
