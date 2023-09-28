#include "main.h"

/**
 * binary_to_uint - converts binary strings to unsigned int
 * @b: pointer the string of the binary number
 *
 * Return: the converted data
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int result;

	result = 0;
	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		result = 2 * result + (b[x] - '0');
	}
	return (result);
}
