#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_diagonal - print slashes
*@n: the number of slashes
*Return: void
*/
void print_diagonal(int n)
{
	/* your code goes there */
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar ('\\');
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}

