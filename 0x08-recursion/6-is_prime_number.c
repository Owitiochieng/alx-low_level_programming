#include "main.h"

int real_prime(int k, int l);

/**
 * is_prime_number - For identifying prime numbers
 * @n: The number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - For calculating if a number is prime or not
 * @k: The number
 * @l: iterator
 * Return: 1 if k is prime and 0 if not
 */
int real_prime(int k, int l)
{
	if (l == 1)
		return (1);
	else if (k % l == 0 && l > 0)
		return (0);
	return (real_prime(k, l - 1));
}
