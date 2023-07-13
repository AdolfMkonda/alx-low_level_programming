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
	int l = 0;
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
