#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*more_numbers - print numbs from 0 to 14 x10 times
*Return: void
*/
void more_numbers(void)
{
	/* your code goes there */
	char i;
	int count;

	count = 0;
	while (count <= 9)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar (i);
		}
	_putchar('\n');
	count++;
	}
}

