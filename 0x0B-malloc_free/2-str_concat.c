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
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);
	while (s1[len] != '\0' && (s1 != NULL))
		len++;
	while (s2[x] != '\0' && (s2 != NULL))
		x++;
	y = x + len + 1;
	arr = malloc(sizeof(char) * y);
	if (arr == NULL)
		return (NULL);
	for (m = 0; m <= y; m++)
		if (m < len)
			arr[m] = s1[m];
		else
			{arr[m] = s2[n];
			n++; }
	return (arr);
	free(arr);
}

