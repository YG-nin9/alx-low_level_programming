#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @size: the byte size
 * @nmemb : the number of the array elemnts
 * Return: return a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}

