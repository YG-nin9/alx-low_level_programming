#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - locates the first c in the accept
 * @accept: the allowed ones
 * @s: the string to be checked
 * Return: the c
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}
	return ('\0');
}

