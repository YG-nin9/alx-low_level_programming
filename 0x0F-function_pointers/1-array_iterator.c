#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - excute on every array element
 * @array: array to be excuted
 * @size: size of the array
 * @action: the functions
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0, x < size, x++)
	{
		action(array[x]);
	}
}

