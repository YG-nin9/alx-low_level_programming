#include "main.h"
/**
 * _strlen_recursion - it is in the name bud
 * @s: what will be counted
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}

