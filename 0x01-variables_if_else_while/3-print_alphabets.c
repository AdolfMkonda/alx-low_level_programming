#include<stdio.h>
/**
 * main - program that print alphabet in lower and uppercase
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
