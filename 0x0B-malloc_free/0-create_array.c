#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char c
 * @size: the size of the array
 * @c : the character that will be put into the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (0);
	}
	for (x = 0; x <= size; x++)
	{
		if (x == size)
		{
			arr[x] = '\0';
		}
		else
		{
			arr[x] = c;
		}
	}
	return (arr);
}

