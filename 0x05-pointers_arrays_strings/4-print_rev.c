#include "main.h"

/**
 * print_rev - Print the string, in reverse.
 * @s: The string to be printed in reverse.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}

	_putchar('\n');
}
