#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - program that add two numbers
 * @a: num1
 * @b: num2
 * Return: 1
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - program that sub numbers
 * @a: num1
 * @b: num2
 * Return: 1
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - program return mult
 * @a: num1
 * @b: num2
 * Return: 1
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - program tha return div
 * @a: num1
 * @b: num2
 * Return: 1
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulas of a number
 * @a: num1
 * @b: num2
 * Return: 1
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
