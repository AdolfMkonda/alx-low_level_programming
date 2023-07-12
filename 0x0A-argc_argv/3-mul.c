#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that print multiplication of arguments
 * @argc: argument count
 * @argv: pointer array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int n;
	int m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
