#include "main.h"
/**
 * printString - A functio for printing a string
 * @string: String input
 * @len: Length input
 */ Return: Void
void printString(char *string, int len)
{
	int index, printFlag;

	index = printFlag = 0;
	while (index < len)
	{
		if (string[index] != '0')
			printFlag = 1;
		if (printFlag || index == len - 1)
			_putchar(string[index]);
		index++;
	}
	_putchar('\n');
	free(string);
}

/**
 * multiplyChar - A function that multiplies characters
 * @mult: A character multiplier
 * @num: String to be multiplied
 * @numI: The last index which is not NULL
 * @des: Place for multiplication
 * @desI: The highest index for starting addition
 * Return: Pointer to destination otherwise NULL
 */
char *multiplyChar(char mult, char *num, int numI, char *des, int desI)
{
	int g, h, result, remainderMult, sum, remainderSum;

	remainderMult = remainderSum = 0;
	for (g = numI, h = destI; g >= 0; g--, h--)
	{
		result = (mult - '0') * (num[g] - '0') + remainderMult;
		remainderMult = result / 10;
		sum = (des[h] - '0') + (result % 10) + remainderSum;
		remainderSum = sum / 10;
		des[h] = sum % 10 + '0';
	}
	for (remainderSum += remainderMult; h >= 0 && remainderSum; h--)
	{
		sum = (des[h] - '0') + remainderSum;
		remainderSum = sum / 10;
		des[h] = sum % 10 + '0';
	}
	if (remainderSum)
	{
		return (NULL);
	}
	return (des);
}

/**
 * checkForDigits - A function that looks for digits in an argument
 * @argVector: Pointer to the arguments
 * Return: 0 for digits otherwise 1
 */
int checkForDigits(char **argVector)
{
	int u, v;

	for (u = 1; u < 3; u++)
	{
		for (v = 0; argVector[u][v]; v++)
		{
			if (argVector[u][v] < '0' || argVector[u][v] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * initializeString - Checks for strings in an argument
 * @string: The string for input
 * @len: Length of the string
 * Return: Void
 */
void initializeString(char *string, int len)
{
	int d;

	for (d = 0; d < len; d++)
		string[d] = '0';
	string[d] = '\0';
}

/**
 * main - A function that multiplies two numbers
 * @argCount: An input of the number of arguments
 * @argVector: An input of the argument vector
 * Return: ) or exit status of 98 upon failure
 */
int main(int argCount, char *argVector[])
{
	int len1, len2, totalLen, tempIndex, i;
	char *numArray;
	char *temp;
	char errorMessage[] = "Error\n";

	if (argCount != 3 || checkForDigits(argVector))
	{
		for (tempIndex = 0; errorMessage[tempIndex]; tempIndex++)
			_putchar(errorMessage[tempIndex]);
		exit(98);
	}
	for (len1 = 0; argVector[1][len1]; len1++)
		;
	for (len2 = 0; argVector[2][len2]; len2++)
		;
	totalLen = len1 + len2 + 1;
	numArray = malloc(totalLen * sizeof(char));
	if (numArray == NULL)
	{
		for (tempIndex = 0; errorMessage[tempIndex]; tempIndex++)
			_putchar(errorMessage[tempIndex]);
		exit(98);
	}
	initializeString(numArray, totalLen - 1);
	for (tempIndex = len2 - 1, i = 0; tempIndex >= 0; tempIndex--, i++)
	{
		temp = multiplyChar(argVector[2][tempIndex], argVector[1],
				len1 - 1, numArray, (totalLen - 2) - i);
		if (temp == NULL)
		{
			for (tempIndex = 0; errorMessage[tempIndex]; tempIndex++)
				_putchar(errorMessage[tempIndex]);
			free(numArray);
			exit(98);
		}
	}
	printString(numArray, totalLen - 1);
	return (0);
}
