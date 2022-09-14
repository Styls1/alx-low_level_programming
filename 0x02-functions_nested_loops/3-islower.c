#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: Always 0 (Successs)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
