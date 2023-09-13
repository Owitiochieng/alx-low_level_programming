#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function is designed to print its own opcodes
 * @argc: An input consisting of number of arguments
 * @argv: An input consisting of array of arguments
 * Return: 0 at all times
 */
int main(int argc, char *argv[])
{
	int bytes, g;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (g = 0; g < bytes; g++)
	{
		if (g == bytes - 1)
		{
			printf("%02hhx\n", array[g]);
			break;
		}
		printf("%02hhx ", array[g]);
	}
	return (0);
}
