#include<stdio.h>
/**
 * main - program that print number in asc order
 * Return: 0
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
