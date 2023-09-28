#include "main.h"

/**
 * clear_bit - clears the indexed bit from the n
 * @n: the integer
 * @index: the order of the bit .. HP refrence
 *
 * Return: none
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1 << index);
	return (1);
}

