#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string pointer.
 * @s2: The second string pointer.
 * Return: String.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
