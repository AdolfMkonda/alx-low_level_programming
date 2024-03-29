#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - program that Prints all elements of a list
 * @h: A linked list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
