#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of ints from min to max
 * @min: the first element of the array
 * @max: the last elemnt of the array
 * Return: the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int x, y;

	x = 0;
	y = min + max;
	arr = malloc(sizeof(int) * y);
	if (min > max)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; min <= max; min++)
	{
		arr[x] = min;
		x++;
	}
	return (arr);
	free (arr);
}

