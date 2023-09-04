#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy an array into a new memory space
 * @str: araay that will be copied
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int x, len;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	len += 1;
	arr = malloc(sizeof(char) * len);
	for (x = 0; x <= len; x++)
	{
		arr[x] = str [x];
	}
	return (arr);
	free(arr);
}

