#include <stdio.h>
/**
 * main - All the single digits of base ten
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		printf("%d", i);

	printf("\n");
	return (0);
}
