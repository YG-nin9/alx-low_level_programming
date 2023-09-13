#include "function_pointers.h"
/**
 * int_index - return the place if comparison = true, else -1
 * @array: an array
 * @size: size of the array
 * @cmp: pointerto a function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}

