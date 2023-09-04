#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concates two arrays
 * @s1: first array
 * @s2: second array
 * Return: pointer to the concated array
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int x, len, y, m, n;

	len = 0;
	x = 0;
	n = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[x] != '\0')
	{
		x++;
	}
	x += 1;
	y = x + len;
	arr = malloc(sizeof(char) * y);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m <= y; m++)
	{
		if ((m <= len) && (m < y))
		{
			arr[m] = s1[m];
		}
		else
		{
			arr[m] = s2[n];
			n++;
		}
	}
	return (arr);
	free(arr);
}

