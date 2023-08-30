#include "main.h"
/**
 * _puts_recursion - it is in the name bud
 * @s: what will be put hehehe
 * Return: void ?
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}

