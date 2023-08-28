#include "main.h"
/**
 * *_memcpy - copies something to waste time
 * @dest: the needed out
 * @n: number of elemnets to be copied
 * @src: the araay will be copied
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	for (; x < n;)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}

