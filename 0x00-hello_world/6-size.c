#include<stdio.h>
/**
 * main - A program that prints the size of various type
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int g;
	long long int h;
	float j;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
