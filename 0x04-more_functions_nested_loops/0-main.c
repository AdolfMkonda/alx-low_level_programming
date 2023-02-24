#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _supper(c));
	c = 'a';
	printf("%c: %d\n", c, isupper(c));
	return (0);
}
