#include<stdio.h>
/**
 * main - program that print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
