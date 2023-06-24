#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - program that generates number and check it
 * Return: 0
 *
 */
int main(void)
{
	int a;
	unsigned int seed = (unsigned int)time(NULL);

	srand(seed);
	a = rand();
	if (a > 0)
	{
		printf("%d is positive", a);
	}
	else if (a == 0)
	{
		printf("%d is zero", a);
	}
	else
		printf("%d is negative", a);
	return (0);
}
