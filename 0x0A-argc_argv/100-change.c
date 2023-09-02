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
	int sents, coins = 0;

	if (arg_c != 2)
	{
		printf("Error\n");
		return (1);
	}
	sents = atoi(arg_v[1]);

	while (sents > 0)
	{
		coins++;
		if ((sents - 25) >= 0)
		{
			sents -= 25;
			continue;
		}
		if ((sents - 10) >= 0)
		{
			sents -= 10;
			continue;
		}
		if ((sents - 5) >= 0)
		{
			sents -= 5;
			continue;
		}
		if ((sents - 2) >= 0)
		{
			sents -= 2;
			continue;
		}
		sents--;
	}
	printf("%d\n", coins);
	return (0);
}
