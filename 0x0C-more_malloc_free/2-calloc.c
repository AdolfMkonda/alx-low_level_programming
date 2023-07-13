#include "main.h"
#include <stdlib.h>
/**
 * _calloc - program that alloc memory by malloc
 * @nmemb: array elements
 * @size: element size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int *p;

	if (i == 0 || size == 0)
		return (NULL);
	p = (int *)malloc((size * sizeof(int)) + nmemb);
	if (p == NULL)
		return (NULL);
	return (p);
}
