#include<stdio.h>
/**
 * main - program that print base 16 numbers
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 'A';
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'F')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
