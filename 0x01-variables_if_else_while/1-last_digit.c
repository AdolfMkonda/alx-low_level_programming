#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - A program to assign a random number
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater tha 5\n", n, m);
	if (m == n)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
