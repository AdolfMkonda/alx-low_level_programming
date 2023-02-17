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

	printf("Size of char: %lu byte(s)\n", sizeof(a));
	printf("Size of char: %lu byte(s)\n", sizeof(b));
	printf("Size of char: %lu byte(s)\n", sizeof(g));
	printf("Size of char: %lu byte(s)\n", sizeof(h));
	printf("Size of char: %lu byte(s)\n", sizeof(j));
	return (0);
}
