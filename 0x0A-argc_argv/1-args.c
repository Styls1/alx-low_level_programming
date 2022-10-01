#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 *
 * @argc: The number of command line arguments.
 *
 * @argv: The array of size argc.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__ ((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
