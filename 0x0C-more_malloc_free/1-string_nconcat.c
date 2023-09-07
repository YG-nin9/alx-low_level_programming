#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concates two strings
 * @s1: first array
 * @s2: second array
 * @n: is the number of bytes from s2 to be concated
 * Return: pointer to the concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int x, len, y, m, k;

	len = 0;
	x = 0;
	k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	while (s2[x] != '\0')
		x++;
	if (n >= x)
		n = x;
	y = n + len + 1;
	arr = malloc(sizeof(char) * y);
	if (arr == NULL)
		return (NULL);
	for (m = 0; m < y; m++)
		if (m < len)
			arr[m] = s1[m];
		else
			{arr[m] = s2[k];
			k++; }
	arr[m] = '\0';
	return (arr);
	free(arr);
}

