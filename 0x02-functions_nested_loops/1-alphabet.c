#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

void print_alphabet(void)
{
	int c;

	while (c = 'a'; c <='z'; c++)
		{
		_putchar(c);
		}
	_putchar(\n);
}
