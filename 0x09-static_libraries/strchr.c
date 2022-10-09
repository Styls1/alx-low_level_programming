#include <stdlib.h>
#include "main.h"

/**
 * *_strchr - Locates a character in a string.
 * @s: String.
 * @c: Character.
 *
 * Return: A pointer to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
		return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
