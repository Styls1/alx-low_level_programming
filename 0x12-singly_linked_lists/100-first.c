#include "lists.h"
#include <stdio.h>

/**
 * before_main - Write a function that prints before the main function
 * is executed.
 *
 * Return: Nothing.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - Function to be executed after the before_main.
 *
 * Return: Nothing.
 */

int main(void)
{
	printf("The goal is to become a magnificent software engineer!\n");

	return (0);
}
