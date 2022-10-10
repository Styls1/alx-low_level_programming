#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: Nothing.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
