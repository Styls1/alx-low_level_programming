#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to return.
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (*s);
	}
	_strlen_recursion(s);
	_putchar('\n');
}
