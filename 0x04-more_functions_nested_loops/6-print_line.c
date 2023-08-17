#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_line - print a line
*@n: the length of the line
*Return: void
*/
void print_line(int n)
{
	/* your code goes there */
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}

