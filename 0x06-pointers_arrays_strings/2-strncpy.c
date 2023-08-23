#include "main.h"
/**
 * _strncpy - copy the src for number of n
 * @src: input
 * @dest: input
 * @n: number of copies
 * Return: output
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x; /* counter*/
	
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
	}
	return (dest);
}

