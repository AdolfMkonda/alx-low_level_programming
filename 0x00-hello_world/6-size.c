#include<stdio.h>
/**
 * main - program that use print function to print size of different data types
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)", sizeof(float));
	return (0);
}
