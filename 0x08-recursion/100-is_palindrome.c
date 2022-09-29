#include "main.h"

/**
 * palindromeChecker - checks the string.
 *
 * @str: The string to be checked.
 * @len: The length of the string.
 * @i: The incrementor, starts at 0.
 *
 * Return: 1 if it's a palindrome, 0 if it's not.
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: The string to check the length of.
 *
 * Return: An integer that displays the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: The string.
 *
 * Return: 1
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
