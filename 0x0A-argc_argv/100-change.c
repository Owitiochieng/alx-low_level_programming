#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @arg_c: number of arguments
 * @arg_v: array of arguments
 * Return: 0 if conditions are met and 1 upon Error
 */
int main(int arg_c, char *arg_v[])
{
	int namba, g, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (arg_c != 2)
	{
		printf("Error\n");
		return (1);
	}
	namba = atoi(arg_v[1]);
	output = 0;
	if (namba < 0)
	{
		printf("0\n");
		return (0);
	}
	for (g = 0; g < 5 && namba >= 0; g++)
	{
		while (namba >= coins[g])
		{
			output++;
			namba -= coins[g];
		}
	}
	printf("%d\n", namba);
	return (0);
}
