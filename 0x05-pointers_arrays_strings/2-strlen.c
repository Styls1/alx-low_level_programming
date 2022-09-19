#include "main.h"

/**
 * _strlen - Returns the length of the string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
