#include<unstd.h>
/**
 * _putchar - A to print character to stdout
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (writer(1, &c, 1));
}
