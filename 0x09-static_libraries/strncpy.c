#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: pointer to char.
 * @src: Pointer to char.
 * @n: integer.
 * Return: Result to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
