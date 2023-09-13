#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - A function meant to choose the correct function
 * to perform as asked by the user
 * @s: This is the  operator passed as argument
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int g = 0;

	while (ops[g].op != NULL && *(ops[g].op) != *s)
		g++;
	return (ops[g].f);
}
