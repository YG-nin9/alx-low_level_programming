#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*jack_bauer - checks the lower chars
*
*/
void jack_bauer(void)
{
	/* your code goes there */
	int minutes , hours;
	
	hours = 0;
	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutess % 10) + '0');
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}

