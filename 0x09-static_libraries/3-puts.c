#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*_puts - reapet after me pls
*@str: the input
*/

void _puts(char *str)
{
	/* your code goes there */

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

