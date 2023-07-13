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
	while (min <= max)
		i++;
	p = (int *)malloc(i * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		p[j] = min;
		min++;
	}
	return (p);
}
