#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *
 * @x: The number.
 * @y: The power to raise @x to.
 *
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x + (_pow_recursion(x, y - 1)));
}
