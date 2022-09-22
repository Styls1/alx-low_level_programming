#include "main.h"

/**
 * *rot13 - Encodes a string using rot13.
 * @s: pointer to string.
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13key[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13key[j];
				break;
			}
		}
	}
	return (s);
}
