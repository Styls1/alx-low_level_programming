#include "main.h"

/**
 * helper - Finds the sqrt of two numbers.
 *
 * @a: The number.
 * @b: The number to test for the sqrt of @a.
 *
 * Return: sqrt.
 */

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to return the sqrt.
 *
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
