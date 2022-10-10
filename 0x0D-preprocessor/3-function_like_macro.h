#ifndef _3_FUNCTION_LIKE_MACRO_H_
#define _3_FUNCTION_LIKE_MACRO_H_
#include <stdio.h>

/**
 * main - Macro ABS(x) that computes the absolute value
 * of a number x.
 * @x: Number to be computed.
 *
 * Return: Nothing.
 */

#define ABS(x) x

int main(void)
{
	int i;

	i = ABS(9);
	printf("%d\n", i);

	return (0);
}
#endif /* #ifndef _3_FUNCTION_LIKE_MACRO_H_ */
