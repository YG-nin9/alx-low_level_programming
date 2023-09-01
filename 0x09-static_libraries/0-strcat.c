#include "main.h"
/**
 * _strcat - append the src to dest
 * @src: input
 * @dest: input
 * Return: output
 */
char *_strcat(char *dest, char *src)
{
	int x; /* the null byte shearch*/
	int y; /*the appender*/

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	for (; src[y] != '\0';)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}

