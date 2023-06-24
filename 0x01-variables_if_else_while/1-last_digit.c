#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - program that check last digit
 * Return: 0
 *
 */
int main(void)
{
	int a;
	int last;
	unsigned int seed = (unsigned int)time(NULL);

	srand(seed);
	a = rand();
	last = a % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", a, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", a, last);
	}
	else
		printf("Last digit of %d is %d and is 0", a, last);
	return (0);
}
