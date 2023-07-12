#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that print sum of arguments
 * @argc: argument count
 * @argv: pointer array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	char *e;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		e = argv[i];
		for (j = 0; j < strlen(e); j++)
		{
			if (e[j] < 48 || e[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum * atoi(e);
		e++;
	}
	return (0);
}
