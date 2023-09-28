#include "main.h"

/**
 * get_bit - get the number index bit from the n
 * @n: the integer
 * @index: the order of the bit .. HP refrence
 *
 * Return: none
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int MSB;

	if (index > 63)
	{
		return (-1);
	}

	MSB = n >> index;

	if (MSB & 1)
	{
		return (1);
	}
	else
		return (0);
}

