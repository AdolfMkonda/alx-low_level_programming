#include "main.h"
/**
 * _isalpha - check for alphabetic char
 * @c: char to be checked
 * Return: 1 for char else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
