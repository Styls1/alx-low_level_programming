#include "main.h"

/**
 * *_memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area.
 * @b: The constant byte.
 * @n: Bytes of the memory area.
 * Return: A pointer @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
