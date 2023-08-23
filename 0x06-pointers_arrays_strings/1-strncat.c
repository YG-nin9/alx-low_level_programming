#include "main.h"
/**
 * _strcat - append the src to dest
 * @src: input
 * @dest: input
 * @n: number of appender
 * Return: output
 */
char *_strncat(char *dest, char *src, int n)
{
	int x; /* the null byte shearch*/
	int y; /*the appender*/

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	for (; (y < n) && (src[y] != '\0');)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}

