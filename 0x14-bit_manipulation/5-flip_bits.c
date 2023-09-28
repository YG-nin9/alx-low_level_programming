#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int cmp = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = cmp >> x;
		if (current & 1)
		{
			count++;
		}
	}

	return (count);
}

