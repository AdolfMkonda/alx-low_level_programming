#include<stdio.h>
/**
 * main - program that print in reverse alphabet
 * Return: 0
 */
int main(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
