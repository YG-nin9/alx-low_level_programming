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
		for (i = 0; i <= n; i++)
		{
			_putchar ('_');
		}
	}
	else
	{
		_putchar ('\n');
	}
}

