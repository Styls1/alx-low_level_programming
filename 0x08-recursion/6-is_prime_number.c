#include "main.h"

/**
 * primeFinder - searches for if a number is prime.
 *
 * @a: The number to check.
 * @b: The numbers we'll go through.
 *
 * Return: Whether or not the number is a prime number.
 */

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: The prime number of the integer.
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
