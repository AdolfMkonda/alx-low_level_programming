#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - program that return pointer to alloc
 * @b: number of bytes to be returned
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
