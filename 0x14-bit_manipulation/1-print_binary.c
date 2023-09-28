#include "main.h"

/**
 * print_binary - print th ebunary equel for the inputed intger
 * @n: the integer
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	int bits, rev_index = 0;
	unsigned long int MSB;

	for (bits = 63; bits != 0; bits--)
	{
		MSB = n >> bits;
		if (MSB & 1)
		{
			_putchar('1');
			rev_index++;
		}
		else if (rev_index)
		{
			_putchar('0');
		}
	}
	if (!rev_index)
	{
		_putchar('0');
	}
}

