#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_rev - reverse that word
*@s: the input
*/

void print_rev(char *s)
{
	/* your code goes there */

	while (*s != '\0')
	{
		s++;
	}
	for (; *s > 0;)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}

