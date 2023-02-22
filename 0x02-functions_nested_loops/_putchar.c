#include<unistd.h>
/**
 * _putchar - A to print character to stdout
 * @c: The character to print
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (writer(1, &c, 1));
}
