#include "main.h"
/**
 * main - program that print 1 to 100 with fizzbuzz challenge
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
			_putchar(i);
		_putchar('\n');
	}
	return (0);
}
