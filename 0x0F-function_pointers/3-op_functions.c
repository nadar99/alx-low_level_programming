#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two integers
 * @a : first number
 * @b : second number
 *
 * Return: int sum of the two numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a : first number
 * @b : second number
 *
 * Return: int subtract of the two numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a : first number
 * @b : second number
 *
 * Return: int multiply of the two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two integers
 * @a : first number
 * @b : second number
 *
 * Return: int division of the two numbers.
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
 * op_mod - mod two integers
 * @a : first number
 * @b : second number
 *
 * Return: int mod of the two numbers.
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
