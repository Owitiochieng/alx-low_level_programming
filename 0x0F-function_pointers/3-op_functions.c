#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This function is designed to return the sum of two numbers
 * @a: The first number input
 * @b: The second number input
 * Return: The sum of the entered two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function is designed to return the difference of two numbers
 * @a: The first number for input
 * @b: The second number for input
 * Return: The difference of these two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the product of two numbers
 * @a: The first number for input
 * @b: The second number for input
 * Return: The product of these two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This is a function designed to return the division of two numbers
 * @a: The first number input
 * @b: The second number input
 * Return: The result of division of these two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This function is designed to returns the remainder
 * of the division of two numbers
 * @a: The first number input
 * @b: The second number input
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

