#include "main.h"
/**
 * *_memset - do what to do
 * @s: input
 * @b: input
 * @n: number of copies
 * Return: output
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	for (; x != n;)
	{
		s[x] = b;
		x++;
	}
	return (s);
}

