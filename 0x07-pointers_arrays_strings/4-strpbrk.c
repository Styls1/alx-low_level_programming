#include <stdlib.h>
#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes.
 * @s: The first occurrence in the string.
 * @accept: The bytes in the string.
 *
 * Return: A pointer to the byte.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
