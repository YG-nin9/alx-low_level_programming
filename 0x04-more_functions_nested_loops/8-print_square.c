#include "main.h"

/**
 * print_square - draws squares in the terminal
 * @n: number of times the character # should be printed
 */
void print_square(int size)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

