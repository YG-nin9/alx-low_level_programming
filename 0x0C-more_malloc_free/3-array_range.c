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
	if (min > max)
	{
		return (NULL);
	}
	y = max - min + 1;
	arr = malloc(sizeof(int) * y);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; min <= max; x++)
	{
		arr[x] = min++;
	}
	return (arr);
	free(arr);
}

