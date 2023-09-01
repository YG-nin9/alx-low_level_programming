#include "main.h"
#include <stddef.h>
/**
 * *_strchr - searches the array for an character
 * @c: the needed character
 * @s: the array that will be searced
 * Return: the c
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	for (; s[x] >= '\0';)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		x++;
	}
	return (0);
}

