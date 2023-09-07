#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - jus allocates memory
 * @b: number of the allocated spaces
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}

