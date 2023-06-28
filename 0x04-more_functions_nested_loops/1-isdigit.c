#include "main.h"
/**
 * _isdigit - a program that checks for digits
 * @c: digit to be chacked
 * Return: 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
