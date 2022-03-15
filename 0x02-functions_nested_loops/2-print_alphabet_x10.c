#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i, a;

    for (i = 0; i <= 9; i++)
    {
        for (a = 97; a < 123; a++)
		{
		_putchar(a);
		}
		_putchar('\n');
    }

	
}