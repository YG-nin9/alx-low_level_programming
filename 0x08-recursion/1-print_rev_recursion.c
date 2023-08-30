#include "main.h"
/**
 * _print_rev_recursion - it is in the name bud
 * @s: what will be put in rev hehehe
 * Return: void ?
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

