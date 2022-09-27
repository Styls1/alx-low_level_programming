#include "main.h"

/**
 * *_memcpy - Copies memory area.
 * @dest: The memory area.
 * @src: The memory area copied from.
 * @n: Number of bytes.
 *
 * Return: A pointer to @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
