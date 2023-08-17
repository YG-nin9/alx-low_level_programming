#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_most_numbers - print numbs from 0 to 9 but not 2 or 4
*Return: void
*/
void print_most_numbers(void)
{
	/* your code goes there */
	char i;

	for (i = '0'; i <= '9';)
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		else 
		{
			_putchar (i);
			i++;
		}
	}
	_putchar('\n');
}

