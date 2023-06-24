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
	b = 'a';
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
