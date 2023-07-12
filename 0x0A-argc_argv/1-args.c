#include "main.h"
#include <stdio.h>
/**
 * main - program that print number of arguments
 * @argc: argument count
 * @argv: pointer array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
