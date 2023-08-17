#include <stdio.h>
/**
 * main - Printing of all two digit combinations
 * Return: 0
 */

int main(void)
{
	void printNumbers(void)
	{
		int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13, 14, 15, 16, 17, 18, 19, 
			23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48,
		       	49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89};
		int numCount = sizeof(numbers) / sizeof(numbers[0]);
		
		for (int i = 0; i < numCount; i++)
		{
			int tensDigit = numbers[i] / 10;
			int onesDigit = numbers[i] % 10;
			
			putchar('0' + tensDigit);
			putchar('0' + onesDigit);
			if (i < numCount - 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	int main(void)
	{
		printNumbers();
		putchar('\n');
		return (0);
	}
	return (0);
}
