#include "main.h"
/**
 * swap_int - program that swap int pointers
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
}
